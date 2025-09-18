#include<stdio.h>
int main()
{
    int arr[5];
    int *p = arr;

    printf("Enter 5 integers: ");
    for(int n=0; n<5; n++){
        scanf("%d",(p+n));
    }
    for(int n=0; n<5-1; n++){
        for(int m=0; m<5-n-1; m++){
            if(*(p+m) > *(p+m+1)){
                int t = *(p+m);
                *(p+m) = *(p+m+1);
                *(p+m+1) = t;
            }
        }
    }
    printf("Sorted: ");
    for(int n=0; n<5; n++){
        printf("%d ",*(p+n));
    }
    printf("\n");
    return 0;
}