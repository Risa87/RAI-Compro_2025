#include<stdio.h>
int main(){

    int value[10] , i , even=0 , odd=0;
    for(int i=0 ; i<10 ; i++){
        printf("Enter value %d:", i+1);  
        scanf("%d", &value[i]);
        if(value[i]%2==0)
        {
            even++;
        }
        else{
            odd++;
            }
        }
            printf("Even number: %d\n", even);
            printf("Odd number: %d\n", odd);

        return 0;
}