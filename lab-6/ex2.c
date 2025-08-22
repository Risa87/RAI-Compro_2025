#include<stdio.h>
int main()
{
    int original[] = {1,2,3,4,5,6,7,8,9};
    int i = 0;
    printf("The reversed Array is: ");
    for(i=1 ; i<=9; i++)
    {
        printf("%d", original[9-i]);
    }
    return 0;
}