#########################################################
#  file name   : Makefile                               #
#  author      : Dakota Reed                            #
#  description : Makefile to automate compiling         #
#                and linking                            #
#########################################################

all: test

test: test.c linked_list.c linked_list.h
	clang test.c linked_list.c -o test

clean: 
	rm -rf *.o *.dSYM

clobber: clean
	rm -rf linked_list test
