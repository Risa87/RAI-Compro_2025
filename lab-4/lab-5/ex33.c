#include<stdio.h>
int main()
{
    int num = 3;
    int sum = 0;
    int result;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum += num;
    }
    while (num != 0);
    printf("result: %d\n", sum);

    return 0;
}