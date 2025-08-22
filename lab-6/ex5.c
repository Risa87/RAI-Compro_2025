#include<stdio.h>
int main()
{
    int num[8] , i , min=0 , max=0;
    for( i=0 ; i<=8 ; i++)
    {
        printf("Enter number %d : ", i+1);
        scanf("%d", &num[i]);
    }
    min=num[0];
    for(int i=0; i<8; i++)
    
    {
        if(num[i]>max) {
            max = num[i];
        }
        if(num[i]<min) {
            min = num[i];
        }
    }
    printf("Smallest number: %d\n", min);
    printf("Largest number: %d\n",max);

    return 0;
}