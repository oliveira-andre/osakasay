#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <signal.h>
#include <ncurses.h>
#include <getopt.h>
#include <locale.h>
#include "art/art.h"

#define VERSION "1.0.0"
#define STATIC_V1_X 32
#define STATIC_V1_Y 110
#define STATIC_V1_RY 38
#define STATIC_V2_X 35
#define STATIC_V2_Y 110
#define STATIC_V2_RY 10
#define STATIC_V3_X 30
#define STATIC_V3_Y 189
#define STATIC_V3_RY 62
#define STATIC_VERSION 1
#define ANIMATED_VERSION 3
#define MAX_LENGTH 30

void init(){
    setlocale(LC_ALL,"");
    initscr();
    cbreak();
    noecho();
    keypad(stdscr,TRUE);
    curs_set(0);
    timeout(-1);
}

void help(){
    printf(
        "Make cute Osaka from Azumanga Daioh say something!!!\n"
        "operations:\n"
        "    -h, --help                          Display this help message\n"
        "    -v, --version                       Show version information\n"
        "    -a <version> <text>                 Cool animated version of cute Osaka (default version 1)\n"
        "    -f <text>                           Freestyle Osaka animation\n"
        "    -s <version> <text>                 Display static version of cute Osaka (default version 1)\n"
        "    -l, --list                          List available versions for Osaka ASCII arts\n"
        "    <text>                              Text that cute Osaka will say!!! (default static version 1)\n"
    );
}

void version(){
    printf("Osakasay v%s\n"
           "License: GPL-3.0 License\n",VERSION);
}

int stoi(char *s){
    int num = 0,cnt = 0;
    while(*s!='\0'){
        num*=10;
        if(!('0'<=*s&&*s<='9')||(!cnt&&*s=='0')){
            return -1;
        }
        cnt++;
        num+=*s-'0';
        s++;
    }
    return num;
}

int randomizer(int min, int max){
    return rand()%(max-min+1)+min;
}

int randint(const int arr[],int size){
    return arr[rand()%size];
}

int get_line(char *argv[],int start,int end){
    int lines = 0,cnt = 0;
    if(end-start)lines++;
    for(int i=start;i<end;i++){
        char *str = argv[i];
        while(*str!='\0'){
            if(cnt>=MAX_LENGTH){
                cnt=0;lines++;
            }
            cnt++;str++;
        }
        cnt++;
    }
    return lines;
}

char** create_canvas(int x,int y){
    char **canvas = (char **)malloc(x*sizeof(char *));
    for(int i=0;i<x;i++){
        canvas[i] = (char *)calloc(y+1,sizeof(char));
    }
    return canvas;
}

void print_canvas(char **canvas,int x,int px,int py){
    for(int i=0;i<x;i++){
        mvprintw(py+i,px,"%s",canvas[i]);
    }
    refresh();
}

void free_canvas(char **canvas,int x){
    if(canvas == NULL)return;
    for(int i=0;i<x;i++){
        free(canvas[i]);
    }
    free(canvas);
}

int textlen(char *argv[],int start,int end){
    int length = 0;
    for(int i=start;i<end;i++)length+=strlen(argv[i])+1;
    if(length-1>MAX_LENGTH)return MAX_LENGTH;
    return length-1;
}

void construct_v1(const char **art[],char *argv[],int *intervals,int frames,int x,int y,int ry,int length,int lines,int start,int end,int round, int current_frame){
    while(round!=0){
        int cnt = 0,pt1=(x+1)/2,pt2=((x+1)/2)+1,pts=3+y,ptt=pts;
        char **canvas = create_canvas(x,y+length);
        clear();
        int terminal_height = LINES;
        int terminal_width = COLS;
        int px = (terminal_width-ry-length-50)/2;
        int py = (terminal_height-x)/2;
        for(int i=0;i<x;i++){
            int len = strlen(art[current_frame][i]);
            for(int j=0;j<y+length;j++){
                if(j<len){
                    canvas[i][j]=art[current_frame][i][j];
                }
                else if(canvas[i][j]=='\0'){
                    canvas[i][j]=' ';
                }
                if(!i&&length){
                    if(j==y){
                        canvas[pt1--][j]='/';canvas[pt2++][j]='\\';
                    }
                    else if(j-1==y){
                        for(int cnt=0;cnt<lines/2;cnt++){
                            canvas[pt1--][j]='|';canvas[pt2++][j]='|';
                        }
                        pt2--;
                    }
                    else if(j+1==y+length){
                        for(int k=++pt1;k<=pt2;k++){
                            canvas[k][j]='|';
                        }
                        pt1++;
                    }
                    else{
                        canvas[pt1][j]='_';canvas[pt2][j]='_';
                    }
                }
            }
            if(!cnt&&(length||lines)){
                for(int j=start;j<end;j++){
                    char *str = argv[j];
                    while(*str!='\0'){
                        if(cnt>=MAX_LENGTH){
                            pt1++;pts=ptt;cnt=0;
                        }
                        canvas[pt1][pts++] = *str;cnt++;str++;
                    }
                    if(cnt>MAX_LENGTH)continue;
                    canvas[pt1][pts++] = ' ';cnt++;
                }
            }
            cnt = 1;
        }
        print_canvas(canvas,x,px,py);
        usleep(intervals[current_frame++]);
        free_canvas(canvas,x);
        if(current_frame==frames){
            current_frame=0;
            if(round>0)round--;
        }
    }
}


void construct_freestyle(char *argv[],int length,int lines,int start,int end){
    int select = randomizer(0,ANIMATED_VERSION-1);
    int x,y,ry;
    while(1){
        int frame[1] = {70000};
        if(select==0){
            x = STATIC_V1_X;
            y = STATIC_V1_Y;
            ry = STATIC_V1_RY;
        }
        else if(select==1){
            x = STATIC_V2_X;
            y = STATIC_V2_Y;
            ry = STATIC_V2_RY;
        }
        else if(select==2){
            x = STATIC_V3_X;
            y = STATIC_V3_Y;
            ry = STATIC_V3_RY;
        }
        construct_v1(osaka_static_v1,argv,frame,1,x,y,ry,length,lines,start,end,-1, select);
        select = randomizer(0,ANIMATED_VERSION-1);
    }
}

int main(int argc,char *argv[]){
    srand(time(NULL));

    int option;
    int mode = 0;
    int ctl = 0;
    int argctl = 0;
    int animated_version = 1;
    int static_version = 1;

    struct option long_options[] = {
        {"help", no_argument, NULL, 'h'},
        {"version", no_argument, NULL, 'v'},
        {"list", no_argument, NULL, 'l'},
        {NULL, 0, NULL, 0}
    };

    while((option = getopt_long(argc,argv,"hvla::s::f::",long_options,NULL))!=-1){
        switch(option){
            case 'h':
                help();
                return 0;
            case 'v':
                version();
                return 0;
            case 'l':
                printf("static: ");
                for(int i=1;i<=STATIC_VERSION;i++){printf("%d ",i);}
                printf("\n");
                printf("animated: ");
                for(int i=1;i<=ANIMATED_VERSION;i++){printf("%d ",i);}
                printf("\n");
                return 0;
            case 'a':
                mode = 1;
                if(!ctl)argctl = 0;
                if(argc<=2)break;
                optarg = argv[2];
                if(optarg && 0<stoi(optarg) && stoi(optarg)<=ANIMATED_VERSION && !ctl){
                    ctl = 1;
                    argctl = 1;
                    animated_version = stoi(optarg);
                }
                break;
            case 's':
                mode = 0;
                if(!ctl)argctl = 0;
                if(argc<=2)break;
                optarg = argv[2];
                if(optarg && 0<stoi(optarg) && stoi(optarg)<=STATIC_VERSION && !ctl){
                    ctl = 1;
                    argctl = 1;
                    static_version = stoi(optarg);
                }
                break;
            case 'f':
                mode = 2;
                if(!ctl)argctl = 0;
                if(argc<=2)break;
                optarg = argv[2];
                break;
            default:
                help();
                return 0;
        }
    }
    init();
    if(mode==2){
        int length = 0,lines = 0;
        length = 5+textlen(argv,optind+argctl,argc);
        lines = get_line(argv,optind+argctl,argc);
        if(length <= 5)length = 0;
        if(lines<=10){
            if(lines&1)lines++;
            construct_freestyle(argv,length,lines,optind+argctl,argc);
            return 0;
        }
    }
    else if(mode==1){
        int length = 0,lines = 0;
        length = 5+textlen(argv,optind+argctl,argc);
        lines = get_line(argv,optind+argctl,argc);
        if(animated_version==1){
            if(length <= 5)length = 0;
            if(lines<=30){
                if(lines&1)lines++;
                int frame[1] = {70000};
                construct_v1(osaka_static_v1,argv,frame,1,STATIC_V1_X,STATIC_V1_Y,STATIC_V1_RY,length,lines,optind+argctl,argc,-1, 0);
            }
        }
        else if(animated_version==2){
            if(length <= 5)length = 0;
            if(lines<=30){
                if(lines&1)lines++;
                int frame[1] = {70000};
                construct_v1(osaka_static_v1,argv,frame,1,STATIC_V2_X,STATIC_V2_Y,STATIC_V2_RY,length,lines,optind+argctl,argc,-1, 2);
            }
        }
        else if(animated_version==3){
            if(length<=5)length=0;
            if(lines<=30){
                if(lines&1)lines++;
                int frame[1]={70000};
                construct_v1(osaka_static_v1,argv,frame,1,STATIC_V3_X,STATIC_V3_Y,STATIC_V3_RY,length,lines,optind+argctl,argc,-1, 1);
            }

        }
    }
    else if(mode==0){
        if(static_version==1){
            int length = 0,lines = 0;
            length = 5+textlen(argv,optind+argctl,argc);
            lines = get_line(argv,optind+argctl,argc);
            if(length <= 5)length = 0;
            if(lines<=10){
                if(lines&1)lines++;
                int frame[1] = {70000}; // SHOW 1 FRAME FOR 0.07 seconds  (if you have more place the expected number)
                construct_v1(osaka_static_v1,argv,frame,1,STATIC_V1_X,STATIC_V1_Y,STATIC_V1_RY,length,lines,optind+argctl,argc,-1, 0);
                return 0;
            }
        }
    }
}

  
