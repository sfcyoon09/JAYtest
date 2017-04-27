CC = gcc

list_test : ylist.o main.o
	gcc -o list_test ylist.o main.o

ylist.o : ylist.c
	gcc -c -o ylist.o ylist.c

main.o : main.c
	gcc -c -o main.o main.c

clean :
	rm *.o list_test
