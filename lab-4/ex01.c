#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter a number: ");
    scanf("%d",&b);
    if(a==b)
        printf("Match");
    else
    printf("Try again");
    
    return 0;
}