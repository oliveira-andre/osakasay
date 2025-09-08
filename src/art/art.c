#include "art.h"

const char *osaka_static_v1_f1[] = {
"      c                                                                           ",
"  ;.  x'                                  ',,,'',,'''',,,                         ",
"   O, .O:  'l                          .,'''''''''''''',,,;.                      ",
".d:  Ol 00, Oo                         '',,,,,,,,:,,;,,,,,;,;'                    ",
" .xoO0O00Od0l                        ,;;;'','',oO:'c:'''''...'                    ",
"   x000OO0O0l                       .,'''''l',dk00l,xd,;,......                   ",
".:k00OxdO000Oo                      .'',:'cd,dOO000dlOd;dc.....                   ",
"    .00O000OK0dxcc.                 .'':o;xdoO000000x:;codl.....                  ",
"      .0000K0OKKddo:                '''dOlo;,l000000k...:Odo....                  ",
"        0KOO0KKxddddoc.             .',0l0;...d00000O..''Odk,....                 ",
"          k00xddddddddoc'           .''kl0l..:x00000K:.:cKOk,....                 ",
"           :c:ldodddddddol:         .''lOO0c:ck0000000kkO00k;....                 ",
"              cdddddoooodddlc'      .'';000K00000OO0K000000x,....                 ",
"                ;odddddddddddol:    .'',k0000000dxddd00000Ol.....                 ",
"                   ldddoddddddddoc: .''',d000000xxdxk000Ox:......                 ",
"                     'ollodddddddddo;''''.':ldkO00O00Oxl,........                 ",
"                        c:loddddddddl''',:lxdolddxxddodol;......                  ",
"                          ':loodddddo'''';kKXXKkoddddddoxxdl,..                   ",
"                            .cldddddd:,','OOXXKKkkxdddddxxxx:.cd:.                ",
"                               :lddddco,'';O0XKKKO0kkxxxkO00lxOkdoc               ",
"                                 'odololc;'lO0KKXOdddxOXKXXK0kxddool.             ",
"                                    cclcdooodxxOKKddloK0kOOkxdddddodo,            ",
"                                      .:ooddddxkO00dc00Oxooddddooooddo;           ",
"                                         odddddodxxodxxddddddddoloddddoc          ",
"                                         cdddddodddodddddddddddo:oddddddl         ",
"                                         ldddddoddo:;dddoddddddo::lddddddl.       ",
"                                         ldddddoddo:;oddoddddddd:.:lodddddo;      ",
"                                         ldddoooddo::loddodddddo: .:codddodoc     ",
"                                         oodddooddo:l:ddoddddddl:'  ::codddddl.   ",
"                                         odddddoddo:d;dddddddddc:;   ;::coddddo:  ",
"                                         ldooddoddo:d:ldoddddddl::.   ,:::coddddl.",
"                                         ldlcdodddo:dl:ddooddddo::.   .:::::looddl"
};

const char *osaka_static_v1_f2[] = {
  "0..................:::;....,;:lo:...'loloooooool::::'...;;;,.....:::,................clloo",
  "0l...............'lood:...cooxOOc..;dO0k0000000Odoool,..cxoo:....lxol:...............lOOOO",
  "O,..............;lloxk,.'codkO0k,'cx00kO00000000Odoood;.,kxooc...:Okol:..............;kOOO",
  "x..............clldO0x''lodO000o'lk000k0000000000kdodkk,.d0kooo'.,O0kool'............'xOOO",
  "o.............lloxO00o'loddolcc,,:lxOOO00000000000xodOOl.,cc::c;..x00kdol,............oOOO",
  "c............'ookO000l;:clool:;,,:cldkO00000000000Oddklol,c:;:lol.:oO0kdoo,...........lOOO",
  ":.............okO000O:cxkkl......  ,xO0000000000000kx0Ol...    .';ld:lOkdoo,..........:OOO",
  ";.............xO000k;lkO0l......    ;O00000000000000O0d...       .:kk:;kkoo'..........:OOO",
  ";............'x000x,oO0Kx......     .x0000000000000000,...        .dOk:,kxl...........;OOO",
  ";.............d00k'ck0XX:.....      .c000000000000000O....         ;KOk,:kl...........;kOO",
  ",.............o0Ol.d0XXK'.....      .;000000000000000x....         .0Kko'kc...........,kOO",
  ",.............cO0:,k0KXK'.....      .,000000000000000d....         .0KOx'd:...........'kOO",
  ",.............:OO;,k0XXK,......  .;;.;000000000000000d....     .;;.'KX0k,d:...........'xOO",
  ";.............;O0c.xOKXXl......  lKKdl000000000000000k.....  ..kKKdlXX0x,x;............xOO",
  ",.............,O0x.ckKXX0'..... .;0Klk0000000000000000;. .    .dK0o0XXOlck,............xOO",
  ",.............,O00xckOKXX0;...... .'d00000000000000000O;...    ..c0KX0OO0x,............dOO",
  ",.............,O0000000KKXKxc;''';lO00000000000000000000Ol;,,,cd0KKKK0000x,............dOO",
  ",.............;O00000000000KKKKKKK0000000000000000000000000KKKKKK00000000x'............oOO",
  ",.............:O000000000000000000000000000000000000000000000000000000000d'............oOO",
  ";.............:O00000000000000000000000000000000000000000000000000000000Od'............oOO",
  ":.............;O000000000000000000OkkkkkkkkkkkOOOOOOOO000000000000000000Oo.............oOO",
  "c.............,k000000000000000000;.':::::::::::::::::o00000000000000000kl.............dOO",
  "l..............dO0000000000000000O''cloooooooolc::::::cO0000000000000000k:.............dOO",
  "l..............,O0000000000000000O,ldxxxxxxxxxxxdoc::::k0000000000000000d..............dOO",
  "o...............;k000000000000000Olxxxxxxxxxxxxxxxdoc::k000000000000000k'..............dOO",
  "d................'lk00000000000000xxxxxxxxxxxxxxxxxddlck0000000000000kc................dOO",
  "k...................cx000000000000kdxxxxxxxxxxddddddddd00000000000Ox:..................xOO",
  "O.....................,lk0000000000xdxxxdddddddddddddok00000000Od:.....................xOO",
  "0'.......................':oxO00000Oxddddddddddddddddk00000Odc,........................xOO",
  "K;............................;lxO000kdddddddddddddkO00Oxc,............................kOO",
  "Ko...............................ldxkOOxxdddddddxkkkxdoo:.............................'kOO",
  "Kk...............................cooooodxxxddddxdooooooo;.............................,OOO",
  "K0'..............................:oooooooooooooooooooooo,.............................:OO0",
  "KK,..............................:oooooooooooooooooooooo,.............................cO00",
};

const char *osaka_static_v1_f3[] = {
"                                                               ",
"                                                               ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⣿⣿⣿⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⣴⣿⣷⣶⣦⣤⣄⡀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣾⣿⢟⣯⣭⣝⠻⣿⣿⣷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⢀⡿⠟⠿⢿⣿⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⣰⣿⣿⢣⣿⠟⠀⠈⢻⡘⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⢸⡇⣟⠛⠓⠮⣝⣻⣿⡿⠟⠛⠛⠛⠛⠛⣿⣿⣏⣿⣟⣀⠀⠀⠀⣷⢹⣿⣿⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⢸⣇⢿⡀⠀⣠⠞⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠉⠛⠶⢦⣽⣸⣿⣿⣷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠸⣿⣜⣷⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⢧⡀⠀⠀⠀⠹⣿⣿⣿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⣾⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢳⡄⠀⠀⠀⢻⣿⣿⣿⣷⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⢰⡇⠀⠀⠀⠀⢰⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⡄⠀⠀⢸⣿⣿⡿⣫⣿⣧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⢸⠁⠀⠀⠀⠀⢸⠋⢧⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⡄⠀⠸⣿⣿⠡⣿⣿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⢸⡄⠀⠀⢀⠀⡾⠀⠀⠑⢦⡀⠀⠀⠀⠀⠀⠀⣀⡤⠀⠀⠀⠀⢀⡀⠀⠀⠙⣆⠀⠹⣿⣷⣝⠿⣿⣿⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠘⣇⠀⠀⢸⣿⠃⣀⡀⠀⠀⠙⢆⠀⠀⠀⠀⠚⣩⣀⠀⠀⠀⢀⣘⣿⠶⣄⣠⡽⠄⠀⠹⣿⣿⣷⣶⠋⠻⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠘⡀⠀⠈⡟⠀⠀⠙⠦⠀⠀⠈⠛⢦⣀⣀⣠⣽⠍⠳⠒⠛⣭⣵⠆⠀⡇⠀⠀⠀⠀⠀⣿⣿⡿⠃⠀⠀⠸⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⣇⠐⠦⣷⣤⣤⣀⡀⠀⠀⠀⠀⠀⠁⠀⠀⢀⣀⣀⣴⣿⠟⠁⠀⠀⡇⠀⠀⠀⠀⠀⢸⠋⠀⠀⠀⠀⣠⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⣹⠤⠶⠋⠉⠙⠛⠛⠷⠄⠀⠀⠀⠀⠀⠀⠀⠘⠛⠉⠀⠀⠀⠀⠀⠧⣴⣶⣶⣤⣤⣿⡆⣀⢾⠥⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⢧⡀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⡦⣄⣀⣰⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⠟⠻⢯⡿⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠻⣿⣳⣦⣄⣀⠀⠀⠀⠀⠀⠘⣧⡤⠶⠿⠦⣤⣤⠴⠖⠛⠦⣤⠴⣾⠁⠀⠀⠀⠀⣆⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠙⠻⡏⠀⠈⠉⢻⡗⢲⠒⡶⠁⠀⠀⠀⠀⠀⢿⠳⣦⠀⠀⠈⢳⣿⣦⣤⣀⣠⣤⠼⢿⣆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠲⠧⣤⣤⣤⣾⡯⢭⣻⠁⠀⠀⠀⠀⠀⠀⣼⠀⢸⠀⠀⠀⠀⢻⡋⠀⣠⣤⠴⡶⠒⠻⢦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⢰⠋⢸⣿⣁⠀⠀⠀⠳⣤⣀⣀⣠⡴⠋⠀⠀⢸⠀⠀⠀⢀⣠⣿⣀⡠⠴⢎⠀⠙⠢⣼⡁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⢸⡀⠘⣇⣘⣿⠋⠋⠛⣳⠦⠤⣉⣛⠶⢶⣶⣛⣤⣶⣾⡿⣿⣞⠃⠀⠀⠀⠙⠒⠤⣀⣉⣙⣶⣦⣤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠳⢤⣤⣋⡁⠀⠀⣰⠃⠀⠀⠀⣀⣼⣿⣿⡿⠛⠋⠉⠙⠻⣿⣿⣶⣤⣄⠀⠀⠀⠀⣹⣿⣿⣿⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⣿⣿⣿⣿⣿⣶⣧⣄⣀⣤⣾⣿⣿⣿⠟⠁⣀⣀⣠⣤⣶⣾⣿⣿⣿⣿⣿⣷⣶⣾⣿⣿⡿⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠛⠛⠻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢿⣻⣟⠛⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣿⣿⣿⣿⣭⣭⣽⠛⠛⠛⠛⠛⠛⠉⠙⠯⣭⣶⣾⣿⣿⣿⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢹⣿⣻⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⢿⣿⣿⣿⣿⣷⣤⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠿⠿⠿⠛⠛⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠛⠛⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ "
};

const char *osaka_static_v1_f4[] = {
"                                                               ",
"                                                               ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣀⣀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣀⣀⣀⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣠⣴⣿⣿⣿⣿⣿⣿⣿⣷⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣾⣿⣿⣿⣿⣿⣿⣿⣷⣦⣤⣄⢀⣀⣀⣠⣤⣤⣶⣿⣿⣿⣿⠿⢛⣛⡛⢿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⡿⢿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠟⠋⠉⠁⠀⠺⢿⣿⡿⣛⣭⣶⠿⠟⢿⣿⢸⣿⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣧⠐⠩⡻⢿⣿⣿⠿⠛⠁⠀⠀⠀⠀⠀⠀⠀⠀⠉⠻⢿⡋⠀⠀⠀⠀⡿⢸⣿⣿⣿⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⣿⣾⣄⢈⣴⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣦⡀⠀⣸⢣⣿⣿⣿⡿⠙⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠹⣇⣻⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠻⣾⣇⣾⣿⣿⣿⡅⠀⢸⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠃⣠⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢿⣿⣿⣿⣿⡄⠀⢻⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡇⣴⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡀⠀⠀⢷⡀⠀⠀⠈⢿⣿⣿⣿⣿⠀⠈⢧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⢹⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⠁⢷⠀⠀⠀⢷⡀⠀⠀⠈⣿⣿⣿⣿⡇⠀⠘⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⠃⡎⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠃⠀⠈⢧⠀⠀⠘⣇⠀⠀⠀⢸⣿⣿⣿⣷⣄⠀⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡏⢰⡇⠀⠀⠀⠀⢰⡆⠀⠀⠀⠀⠀⠀⢠⠞⠁⠀⠀⠀⠈⠳⡀⠀⣿⠀⠀⠀⠀⢹⣿⠟⣫⠹⣷⣯⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⣶⣤⣠⣶⠀⠻⠄⠀⢀⡀⢀⡴⠋⠀⠀⢀⡤⠀⠀⠀⠙⣦⣿⠀⠀⠀⠀⠈⢷⣿⣿⡇⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣇⠀⢠⠇⣀⣀⠉⠙⠛⠛⠒⠋⠛⠉⠀⠀⣀⡴⠋⠀⠀⠀⠀⠀⢀⡟⠀⠀⠀⠀⠀⢸⣿⣿⢧⣿⠟⢦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⡴⠃⢀⡼⠿⢿⣷⣦⣄⠀⠀⠀⠀⠀⠀⠀⢀⣠⣤⣶⡶⠿⠛⣼⠀⠀⠀⠀⠀⢀⣟⣛⣣⡿⠋⠀⣠⠇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⠀⠀⠀⠀⠀⠀⠉⠉⠀⡀⠀⣠⢄⣀⡤⠘⠋⠀⠀⠀⠀⣀⣽⡦⣄⣤⣴⣶⣿⠿⠿⡟⣁⡠⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠷⢄⣀⠀⠀⠀⠀⠀⣠⠴⠛⠛⠛⠶⣤⣻⠀⠀⠀⣀⣀⣠⣿⣿⡼⣿⣿⣿⣏⠙⠒⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⠃⠀⠀⢹⠿⠛⢓⡶⣶⠃⠀⠀⠀⠀⠀⠘⣿⡏⠉⠉⠻⣧⣀⠋⠁⠀⠈⢻⠁⠘⢷⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣶⣋⣀⣀⣠⠟⠀⠀⢸⡇⢿⡀⠀⠀⠀⠀⠀⣰⠇⢹⠄⠀⠀⠙⣿⠀⠀⠀⠀⣾⣠⣴⡞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡽⣿⢯⠁⠀⠀⠀⠈⠛⣿⠿⠦⣤⣤⠴⠞⠁⠀⡾⠀⠀⠀⠀⢻⠟⠲⢶⡴⠽⠗⠀⠉⠳⢶⣦⣤⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡟⠀⢻⠈⢇⠀⠀⠀⠀⠀⡟⣷⡄⠀⣿⣦⣤⣤⡾⠁⠀⠀⠀⠀⢸⠴⠊⠙⢄⠀⠀⠀⠀⠀⣼⣿⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠻⣄⠘⠳⠾⣦⣀⣀⠀⣸⢣⠇⠈⢻⣿⠉⠻⣖⣶⠒⠒⢲⣶⣿⡋⠀⠀⠀⠀⠑⢤⡀⠀⣼⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠓⠒⠚⠋⠈⢉⣿⢁⡞⠀⠀⢸⣿⠀⠀⠈⠁⠀⠀⠀⢿⣿⣷⡀⠀⠀⠀⠀⣈⣿⣿⣿⣿⣿⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢾⣿⣿⡀⢀⣤⣿⣿⣶⣤⣤⣤⣤⣤⣶⣾⣿⣿⣿⣤⣤⣶⣿⣿⣿⣿⣿⠟⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⣿⣿⣿⣿⣟⡻⢿⣿⣿⣿⣿⣿⣿⣿⣿⠿⣿⡿⣿⣿⣿⣟⠛⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⣿⣿⣿⠟⠁⠀⠀⠀⠀⠀⠀⠙⣦⣴⣾⣿⣿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⣿⣿⡿⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⣿⣿⣿⣿⣿⣦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ",
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠛⠛⠛⠛⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠻⠿⠿⠿⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ "
};


const char **osaka_static_v1[] = {osaka_static_v1_f1, osaka_static_v1_f2, osaka_static_v1_f3, osaka_static_v1_f4};

  // "                 ;x:                                                                                                                                                                 "
  // "          .      'KO.                                                                              .',,,,''',',.'''''''',,'.                                                         "
  // "         .Ox.     00l                                                                          .'''.,'';'''',,,',',''''','.'''.                                                      "
  // "          O0x     cK0l                                                                      .''.'''''''''''''''''''''''''''''''.'.                                                   "
  // "          .O0d    .000:       'c.                                                         .'.''''''''''''''''''''''''''''''''',,,,,.                                                 "
  // "  cdc      .0Kx:   :0KOo    ,kO0'                                                       .''''''''''',',,,',';,;,,,;,,;,,;:,;;;;;:;:;,.                                               "
  // "   l0xl.    lKOOc   kK00:   kK0O                                                      ..''.'''''',,,;;,:,,,,;;,',,;,',,',,',,,,,;;:;;;.                                              "
  // "    .00Od.   o000o,c0000O' .000O                                                     .',,,,,,,;;;,,''''''',:d,''''l:''''''.''''''.'',;,,                                             "
  // "      .00kd.  d0000K00000kloO00x                                                    .,;;;;;;,,''''',''''';lo0k:''',dc'''''..'''''......'.                                            "
  // "         x00kxO00O00OK0K00Ox0K0O                                                    ,;;;;,,,''''''l,,'';,ocOK00l,''cddc',,',,.'',''.......                                           "
  // "           :00O0000K0KOO000O000O                                                   .;,,''''''''''cx'''.;odd0000Ox,''odOo;'''c,..''.........                                          "
  // "           .000000KKOkxkO0000000                                                   .''.''''''''',dx''',dxxO000000x,'cd00O;'':o;..'..........                                         "
  // " ldddodoodxk0KO00OkxddxK00000K0Od.                                                .'''''''':''''lxk'';ok0d0O0O0O00Ol'o0O0Oc,,odl'.'.........                                         "
  // "     .';dO000KO00xdddxO00000OK0kXOd.                                               ,'''',';o'''cd0k.cdkK0O0OK0KO0000o;Okkxdo,:dOx.'..........                                        "
  // "             O0000OOxk00000000O0XXKld'                                            .'''''''lo'';dOKx,dk000000000000000cllllloc;cO0l...........                                        "
  // "              ;000KK000000000OOXXKxdXKdcllc,                                      .'''.'':dk,'okkdcclok00000000000000kx;'',:kko:d0o..........                                        "
  // "                ;0000K0K00O0kKKXKxd0KKKooddo;                                     .'''.',ox0c:clollcloOK0O0O000O00000K;.''..'ckkooKx'.........                                       "
  // "                  xK0K0000OO0XK0xOKKKK0ooddodl,                                   .''''':dO0o;x0o.....;0000O000O00000X........;K0cd0o,.........                                      "
  // "                    k000O00KXKOdOXXXXXxdddddddoc;                                 .'''.'oO0O;O0K'......'0000000000000X.........xXk'Oxd.........                                      "
  // "                    '00KKKK0kkkKXKXK0xddddddddddol:.                              .'''.'d00cdOXk........l000000O00000X'........:X0loxd.........                                      "
  // "                      ;X0kdxONXXXXK0doddoddddxoodxdd:.                            .,,.''o0K:k0XO.......,;0O0K0KO00000Kc.'..'xd:cN0kcxx'......'.                                      "
  // "                        'xO0KXKKXOxododdodooddddodddolc'                           ''''';O0:x0KK......,ocK00000O00O000O..'',xkcxXO0kxd'........                                      "
  // "                         .xxkO0Od:oddddddddddddddddddddoc.                         ''''''k0xcKXXc.'...xK0K0000000000KKKk'.'...;XK000xd'.........                                     "
  // "                           'locc:::ldoddododddooododdododolc.                      ''''''lK0lOKK0,..'.';o00O0O0O00000K00OxdxxdO000K0xd'.........                                     "
  // "                            ,c::c:::ooddodoodxoooddddooddoddoc;                    ,'''',;00000000ocoodOO00OK00O00000K0OK0O0000OK0K0dd,..........                                    "
  // "                              .,::clloddddoododdododdododdddddoc:                  '''''''k0000000K000000000000kO0000K00000000000000dd'..........                                    "
  // "                                  'coddddddddoddododdododddddddodlc:.              '''''''l000000KK000000000000Ok0000KK000000000000Odl...........                                    "
  // "                                    .lodoxdddxdooxoxdoodooddddxodddooc,            ''''',':00000000OK00K000O0k0kOkkxddOOKKO0000OK0Kxo,.......'...                                    "
  // "                                       :cooodddooddddooddodddddoddoddooo;          .''''''.d0000000000OK0000l:cclllllco000O0000O0Okd:............                                    "
  // "                                         ,clododddddodddddddddddddododdool:'       .''''''',k0000KK000000000llodxxxxxxoK000000000xdc.............                                    "
  // "                                            ;cloododdooodddddddoddddddoddodocc;.   .'''''''';ok000K000000000kdxdxxdxxkO000O000Okdc;..............                                    "
  // "                                              .:cddxdolooodddddoddoodddxdoddodolc. .,'',,,,,,.':lO00000K0OO0K00xkkkkOK0O00O0kdl;,.'..........'...                                    "
  // "                                                .:codoo:codddooodddddooddododddddll''''''''''....';cxkOKO000000O00O00K000kxd:,...................                                    "
  // "                                                   .clooc:coddddoooodddddddddddddod;'''''''''.........,:coxO0000000000Oxdooo'...... .............                                    "
  // "                                                     .:coc::lododddodddxdoododdodox:'''''','''x:dddllc::;lododxdxdddooolddooddl...  .........'  .                                    "
  // "                                                        ,cc:c:llddoododxdoododdododl'.'','',,.OdxXXKXKKN0xxoodxododooddoxdoooxxoc,  ..........  .                                    "
  // "                                                          ,:::::loddooodddooddddddol.'''''''''d0dXXXXXKXK0xlooddddddddddddddlxxxxddl;'.......   .                                    "
  // "                                                             ;:::clodoodddoodddddddo':''''''''cNkONXXXXXKX0dodddddddddddddddoxxxxxxxxdc.....                                         "
  // "                                                               .cc::oddxdoododdoddxd,::',',,,,,0KdKKXXXNXKK0xxxodddddddoxxoddxxdkxOxdxc....,ol                                       "
  // "                                                                 .::::lddoododdodddd;,o''''''''lKkxKXKKXKKKKOO0kOxddddoodooodxxdxxkxdx;...:O0dx'                                     "
  // "                                                                    .:::loddddddddddc.oo,''''''.dXxOXXXXXKKXKxO000OkxddddddoxxxxxkkO0k..:kKkkOxcclc                                  "
  // "                                                                      .c::loddddddddo'ldl,'''''';OXxKKKXKKKKX0kO00O0OOkxxxodkOOO0KXK0coOKOx0kdooddol.                                "
  // "                                                                         ;:clddododddc;doo:,,',,.lO0kKXNXKKKXX0dkxddxkOO0OdKXKKKXXNX0XXOk0Oxoxdododdo'                               "
  // "                                                                           ':coddollod:dllol;,''';oOkxKXKKKKKKKoooodddddxxKKKKKKKKXKK0kkKkodoododdddlc;                              "
  // "                                                                              ;clodlcooolcdddlc::;cd0kk000KKXXX0oodddolcl0XKXXXXXXX0OO0kxdddddddooooldoc.                            "
  // "                                                                                'cooc:ldl:dddlododdodxxxdxOxKKXKOodddl:;xXOOOOOkOkOO0xdoododoxdododooddxl.                           "
  // "                                                                                  'clc:cl:oddcdooddodddxokkxXXXKXodooc:cKK0kOdddkx0Oodddododoododdoodddxoc.                          "
  // "                                                                                    .c:::::ooloodddddodokXOkkOKKKkodo:c0XXXKxxxooododoodddddocooddcooodddol.                         "
  // "                                                                                       .::;loldoddddddddoxkkOkOOOKdoo:kXK0OOkxkododddooddddddcoodoododdddodo,                        "
  // "                                                                                         .:colddoddoxddxdododoxxkkOoldOkOOxxdodoxdxdoodoododdllodloddddxodooo;                       "
  // "                                                                                            llddoddoddoxoooodddoodxdlkxxxoodddoodoxdooddododdccolooddodxoooodd:                      "
  // "                                                                                             odddddddddddoooddddodooxxddddddddoodddddddddddddc:clodddddddddddddc'                    "
  // "                                                                                             ooddddoddddoddodododdoddddoddoddddododdododdddddl:;:oddodddooddddodo.                   "
  // "                                                                                             oddoddododxdoooxdxodod:':doddoddoooxdxdoddoododdo:;::dddddxoddoddoxdo:                  "
  // "                                                                                             ooddddodoododdodddoddo:,,oodooddddododdododddddol:;:::oooddooddddodood;                 "
  // "                                                                                            .odddddddddddooddddddod;,,ldddddoooddddddddddddddo::;:::ldddodddddddddooc.               "
  // "                                                                                            .oododdododxoooodododod;;,:oddoddoooddxdooddododdd:;:::::loxoododdoxddxool.              "
  // "                                                                                            .ddooddodooxdooodddoddx;:;;oddoddoooddxdooddodododc:' ::::cdoddoddoxodxdddl:             "
  // "                                                                                            .dooddddddddoddodododdd;:c,odddddddododddooddddddo::,  ,::::cooddddddddoddodc.           "
  // "                                                                                            .dooddddddddoddodododdd;:o':ddoddddododddooddddddo::;   ;;::::lodddddddoddodol'          "
  // "                                                                                            .ddooddoxddxdoooxoxodod;:x,,dxoddoooxdxdooddododdo:;:    :cl:::codoxddxdoooxdxl;         "
  // "                                                                                            .dddoddoddoxoooodddoddd;:x;'ododdooodoxdooddododo::;:.    ;c:::::loxdoxddooxodoo,        "
  // "                                                                                            .ddddddddddddoodddddodd;:xc,:ddddoooddddddddddddl::::'     .:::::::cldodooodddddol'      "
  // "                                                                                            .doddddoddddoddodododdo;:dl';doddddododdododddddl::;:;       ::::::c:cooddodododdoo:     "
  // "                                                                                            .oddoddldddxdoooxdxodod;:do,;doddoooxdxdoddoododlcc::;'      .c;:::l::lllooxdxoddddol    "
  // "                                                                                            .dodddocdoododdodddoddd;:ddc,coddddododdodddddddo::::::        ':::c::c::cldddoddododl:  "
  // "                                                                                            .dddddl:ldddooodddddddd;:xdd;;dodooodddddddddddddc:::::.        ;:::::::::::lododddddddc."
  // "                                                                                            .dooddl:cdododdooooodoo;:ddd:;lddddooodooooddddddo:;:c:'        .c:cc:c;:c;c;coooododdod,"