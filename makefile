all: main.o
	gcc -o program main.o
main.o: main.c
	gcc -c main.c

clean:
	rm -rf program main.o

run:
	./program
© 2021 GitHub, Inc.
Terms
Privacy
