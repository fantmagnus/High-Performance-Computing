#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    /* Error handling */
    if(argc != 5)
    {
       printf("Wrong number of arguments!\n\n");
       printf("Correct form is:\n");
       printf("./pSwag -a <int> -b <int>\n");
       return 0;
    }

    if((strcmp(argv[1],"-a") + strcmp(argv[3],"-b") != 0)
        || (strcmp(argv[1],"-b") + strcmp(argv[3],"-a") != 0))
    {
        printf("Incorrect usage of flags!\n\n");
        printf("Correct syntax is:\n");
        printf("./pSwag -a <int>, -b <int>\n");
        return 0;
    }

    /* Converting the values of A and B to longs */
    char *ptr1; char *ptr2;
    long firstArg = strtol(argv[2],&ptr1,10);
    long secondArg = strtol(argv[4],&ptr2,10);
    if(strcmp(ptr1,"") + strcmp(ptr2,"") != 0)
    {
        printf("You have not correctly passed integers to both flags!\n");
        return 0;
    }

    /* Printing the values of A and B */
    long a = (strcmp(argv[1],"-a") == 0) ? firstArg : secondArg;
    long b = (strcmp(argv[1],"-b") == 0) ? firstArg : secondArg;
    printf("A is %d and B is %d\n",a,b);
}
