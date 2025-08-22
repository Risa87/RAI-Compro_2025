#include<stdio.h>
int main()
{
    int num = 0;
    int sum = 1;

    printf("Multiplication table: \n");
    for(int num = 2; sum <= 12; sum++){
        printf("%d * %d = %d\n", num,sum,num*sum);
    }

    return 0;
}


