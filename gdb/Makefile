.PHONY:clean all
CC=gcc
CFLAGS= -Wall -g
BIN=simple hello bugging 
# main
all:$(BIN)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
main:main.o search.o
	$(CC) $(CFLAGS) -c $^ -o $@
clean: 
	rm -f *.o $(BIN)
