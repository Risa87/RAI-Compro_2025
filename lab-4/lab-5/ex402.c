#include<stdio.h>
int main()
{
    int num,sum = 0;

    printf("Multiplication table: \n");
    for(int num = 9; sum <= 12; sum++)
    {
        printf("%d * %d = %d\n", num,sum,num*sum);
    }

    return 0;
}