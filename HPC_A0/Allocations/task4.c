#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define SIZE 10

int main() {

int * asentries = (int*) malloc(sizeof(int)*SIZE*SIZE);
int ** as = (int**) malloc(sizeof(int*) * SIZE);
FILE *fp = fopen("matfile.txt","w");

for ( size_t ix = 0, jx = 0; ix < SIZE; ++ix, jx+=SIZE)
	as[ix] = asentries + jx;

for ( size_t ix = 0; ix < SIZE; ++ix) {
	for ( size_t jx = 0; jx < SIZE; ++jx) {
		as[ix][jx] = ix*jx;
		printf("%d\t", as[ix][jx]);
	}
	printf("\n");
}

fwrite(as, sizeof(int*), sizeof(int*)*SIZE,fp);
free(as);
free(asentries);
fclose(fp);
printf("Done writing.\n");
fp = fopen("matfile.txt","r");
printf("File opened.\n");

int ** b = (int**) malloc(sizeof(int*) * SIZE);

asentries = (int*) malloc(sizeof(int)*SIZE*SIZE);
for (size_t ix = 0, jx = 0; ix < SIZE; ++ix, jx+=SIZE)
	b[ix] = asentries + jx; 
fread(b,sizeof(int*),sizeof(int*)*SIZE,fp);

printf("Done reading.\n");

for (size_t ix = 0; ix < SIZE; ++ix) {
	for (size_t jx = 0; jx < SIZE; ++jx) {
		printf("%d\t",b[ix][jx]);
		
	}
	printf("\n");
}
free(b);
free(asentries);
return(0);
}


