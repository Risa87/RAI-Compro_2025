#include<stdio.h>
int main()
{
    int value[9] , i;
    for(int i=0; i<=9; i++){
        printf("Enter the value %d here:", i+1);
        scanf("%d", &value[i]);
    }
    printf("Values in array are: ");
    for(int i=0; i<=9; i++){
        printf("%d ,", value[i]);
    }
    return 0;
}