#include<stdio.h>
int main()
{
    int count = 1;
    int n;
    int s=0;

    while(count<=10){
    printf("Enter the number: ");
    scanf("%d", &n);
    s += n;
    count ++; }

    printf("Total sum is %d\n", s);
    return 0;
}