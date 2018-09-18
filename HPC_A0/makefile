CC	=	gcc
CFLAGS	=	-O1
LIBS	=	-lm -L$(HOME)/local_flint/lib -L$(HOME)/local_arb/lib -lflint -larb 

HEADERS	=
OBJECTS	= poly_roots.o
PROGRAM	= run

.PHONY	=	all

%.o:	%.c	$(HEADERS)
	$(CC) -c -o $@ $< -I$(HOME)/local_arb/include -I$(HOME)/local_flint/include $(CLFAGS)

all:	$(PROGRAM)

$(PROGRAM):	$(OBJECTS)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

clean:
	rm -f *.o
	touch *.c

test:
	make
	./run




