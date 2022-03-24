#########################################################
#  file name   : Makefile                               #
#  author      : Dakota Reed                            #
#  description : Makefile to automate compiling         #
#                and linking                            #
#########################################################

all: main linked_list

linked_list.o: linked_list.c linked_list.h
	clang -c linked_list.c

test: test.c linked_list.o linked_list.h
	clang test.c linked_list.o -o test

clean: 
	rm -rf *.o

clobber: clean
	rm -rf linked_list
