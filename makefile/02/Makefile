.PHONY:clean all
CC=gcc
# implied derivation
CFLAGS=-Wall -g    
BIN=01test 02test 03test
all:$(BIN)

# %.o:%.c
# 	gcc -Wall -g -c $< -o $@
# or 
.c.o:
	$(CC) $(CFLAGS) -Wall -g -c $< -o $@

01test:01test.o
	$(CC) $(CFLAGS) $^ -o $@
02test:02test.o
	$(CC) $(CFLAGS) $^ -o $@
03test:03test.o pub.o
	$(CC) $(CFLAGS) $^ -o $@

# 01test.o:01test.c
# 	gcc -Wall -g -c $^ -o $@
# 02test.o:02test.c
# 	gcc -Wall -g -c $^ -o $@

clean: 
	rm -f $(BIN) *.o


# 28:00
