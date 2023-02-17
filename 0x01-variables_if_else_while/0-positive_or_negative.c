#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int n;
    srand(time(NULL));   
    n = rand() - RAND_MAX / 2;   

    printf("%d\n", n);
    if (n > 0) {
        printf("is positive\n");
    } else if (n < 0) {
        printf("is negative\n");
    } else {
        printf("is zero\n");
    }
    printf("\n");

    return 0;
}
