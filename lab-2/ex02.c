#include<stdio.h>
int main()
{
    int total,mins,hrs;

    printf("Enter total minutes:");
    scanf("%d",&total);

    mins= total / 60;
    hrs= total % 60;

    printf("%d mins is %d hrs, and %d mins\n",total,mins,hrs);
    return 0;
}