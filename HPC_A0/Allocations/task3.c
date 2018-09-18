#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define SIZE 10

int main() {
int ** as = (int**) malloc(sizeof(int*) * SIZE);
for (size_t ix = 0; ix < SIZE; ++ix)
	as[ix] = (int*) malloc(sizeof(int) * SIZE);

for ( size_t ix = 0; ix < SIZE; ++ix)
	for ( size_t jx = 0; jx < SIZE; ++jx)
		as[ix][jx] = 0; 

printf("%d\n", as[0][0]);
for (size_t ix = 0; ix < SIZE; ++ix)
	free(as[ix]);
free(as);

int * asentries = (int*) malloc(sizeof(int)*SIZE*SIZE);
as = (int**) malloc(sizeof(int*) * SIZE);
for ( size_t ix = 0, jx = 0; ix < SIZE; ++ix, jx+=SIZE)
	as[ix] = asentries + jx;

for ( size_t ix = 0; ix < SIZE; ++ix)
	for ( size_t jx = 0; jx < SIZE; ++jx)
		as[ix][jx] = 0;

printf("%d\n", as[0][0]);

free(as);
free(asentries);
}
