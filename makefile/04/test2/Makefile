CC = g++
BIN = test2
OBJS = test2.o
CPPFLAGS = -Wall -g
.PHONY: all clean print
all:print $(BIN)
print:
	@echo "--------- make all in $(PWD) ------------"
$(BIN):$(OBJS)
	$(CC) $(OBJS) -o $@
%.o:%.cpp
	$(CC) -c $<
clean:
	@echo "------------make clean in $(PWD) -----------"
	rm -f $ (BIN) $(OBJS)
