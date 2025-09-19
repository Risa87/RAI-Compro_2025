#include<stdio.h>
#include<math.h>

int isPrime(int n){
    if(n <= 1)return 0;
    if(n == 2) return 0;
    if(n % 2 == 0)return 0;

    for(int i=3; i<=sqrt(n); i+=2){
        if(n % i==0)return 0;
    }
    return 1;//Prime
}
int main()
{
    int s,e;
    printf("Enter the start and end number: ");
    scanf("%d %d", &s,&e);
    printf("The prime numbers within the intervals are: \n");

    for(int i=0; i<=e; i++){
        if(isPrime(i)){
            printf(" %d", i);
        }
    }
    printf("\n");
    return 0;
}