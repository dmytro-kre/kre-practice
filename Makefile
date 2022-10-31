
calculator: calc.o main.o
	gcc main.o calc.o -o calculator

main.o: main.c
	gcc -c main.c -o main.o

calc.o: calc.c
	gcc -c calc.c -o calc.o

