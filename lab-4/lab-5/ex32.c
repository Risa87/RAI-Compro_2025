#include<stdio.h>
int main()
{
    int i;

    printf("Decimal\tASCII\n");

    for(i=33; i<=55; i++){
        printf("%d\t%c\n", i, i);
    }
    return 0;
}