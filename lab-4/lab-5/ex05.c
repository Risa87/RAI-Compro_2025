#include<stdio.h>
int main(){
     
    int num;
    long long fact=1;
    
        printf("Enter a number: ");
        scanf("%d", &num);

        if(num<0){
            printf("Factorial cannot be\n");
        return 0;}
            for(int i=1; i<= num; i++){
                fact *=i;
            }
            printf("Factorial of %d is %lld\n", num,fact);
            return 0;
        }
