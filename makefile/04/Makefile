SUBDIRS = test1 test2
# five triget
.PHONY:default all clean $(SUBDIRS) 
default:all

all clean:
	$(MAKE) $(SUBDIRS) TARGET=$@
	# make test1 test2 TARGET=all
$(SUBDIRS):
	$(MAKE) -C $@ $(TARGET)
	# make	 -C test1 all
	# ||
	# make all test1/Makefile

