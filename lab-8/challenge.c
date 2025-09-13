#include<stdio.h>
int main(void)
{
    int arr[5] = {0};
    int *p = arr;
    int i, j, temp;
    int

    printf("Enter 5 integers: ");
    for(i=0; i<5; i++){
        scanf("%d", (p + i));
    }

    for(i=0; i<5-1; i++){
        for(j=0; j<5-i-1;j++){
            if(*(p+j) > *(p+j+1)){
                temp = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = temp;
            }
        }
    }

    printf("Sorted: ");
    for(i=0; i<5; i++);
    {
        printf("%d", *(p+i));
    }
    
    printf("\n");

    return 0;
}