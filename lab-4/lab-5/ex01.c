#include<stdio.h>
int main()
{
    int num[10];
    int sum = 0;
    float avr;

    for(int i=0; i<10; i++){
        printf("Enter the number: ");
        scanf("%d", &num[i]);
        sum += num[i];
    }
    avr= sum/10.0;
    printf("total sum is %d\n", sum);
    printf("Averange is %.2f\n", avr);
    
    return 0;
}