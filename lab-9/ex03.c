#include<stdio.h>
#include<math.h>

int sumsq(int a, int b){
    return (a*a)+(b*b);
}
int main()
{
    int a,b;
    printf("Enter the two integer: ");
    scanf("%d %d", &a,&b);
    printf("Sum of squares of %d and %d is %d \n", a,b,sumsq(a,b));

    return 0;
}