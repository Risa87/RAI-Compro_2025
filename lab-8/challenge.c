#include<stdio.h>

int main()
{
    int arr[5];
    int *p = arr;
    int n = 5;

    printf("Enter 5 integers: ");
    for(int i=0; i<n; ++i){
        if(scanf("%d", p + i)!= 1);
        return 0;
    }

    
    for(int pass=0; pass<n-1; ++pass){
        int *p=p;
        int *q=p+1;
        int *last=p+(n-pass-1);

        while(q<=last){
            if(*p>*q){
            int tmp=*p;
            *p=*q;
            *q=tmp;
            }
    
        ++p;
        ++q;
        }
    }

    printf("Sorted: ");
    for(int i=0; i<n; ++i)
    {
        printf("%d", *(p+i));
        if(n < n-1)putchar(' ');
    }
    
    putchar('\n');
    return 0;
}