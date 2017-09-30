CC=gcc
CFLAGS=-Wall -g

all: ltcs_main.c
	${CC} ltcs_main.c ${CFLAGS} -o ltcs

clean:
	rm -rfv ltcs

install:
	cp -Rv ltcs /usr/bin
	mkdir -pv /usr/share/ltcs/{sheets,config}
	
