CC	=	gcc
CFLAGS	=	-O1
LIBS	=	-lm -L$(HOME)/local_flint/lib -L$(HOME)/local_arb/lib -lflint -larb 

.PHONY	:	all

all	:	stAll	hpAll	memFrag	fSwag	pSwag
stAll 	:	task1.o
	gcc -o stAll task1.o

task1.o	:	task1.c
	gcc -c $(CFLAGS) task1.c

hpAll	:	task2.o
	gcc -o hpAll task2.o

task2.o	:	task2.c
	gcc -c $(CFLAGS) task2.c 

memFrag	:	task3.o
	gcc -o memFrag task3.o
task3.o	:	task3.c
	gcc -c $(CFLAGS) task3.c

fSwag	:	task4.o 
	gcc -o fSwag task4.c
task4.o	:	task4.c
	gcc -c $(CFLAGS) task4.c

pSwag	:	task5.o
	gcc -o pSwag task5.o
task5.o	:	task5.c
	gcc -c $(CFLAGS) task5.c
clean: 
	
	rm -r *.o
	touch *.c
