#include<stdio.h>
int main()
{
    struct Time{
        int min;
        int sec;
    };

    struct Time t[3];
    int i,total=0;
    for(i=0;i<3;i++){

        printf("Time input m:s");
        scanf("%d:%d",&t[i].min,&t[i].sec);
        total += t[i].min*60 + t[i].sec ;
    }
    printf("Total time elapsed: %d second(s)\n", total);

    return 0;

}