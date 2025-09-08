CC = gcc
CFLAGS = -O2 -Wall
LDFLAGS = -lncursesw
SOURCES = src/osakasay.c src/art/art.c
OUTPUT = osakasay

all:
	$(CC) $(CFLAGS) $(SOURCES) -o $(OUTPUT) $(LDFLAGS)
	strip $(OUTPUT)

clean:
	rm -f osakasay
