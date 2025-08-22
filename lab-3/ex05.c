#include<stdio.h>
int main()
{
    char name[50];
    int age;
    float height;
    char university[50];
         
        printf("Enter your name:\n");
        scanf("%[^\n]",name);     

        printf("Enter your age:\n");
        scanf("%d",&age);

        printf("Enter your height:\n");
        scanf("%f",&height);

        printf("Enter your university name:\n");
        scanf(" %[^\n]",university); 
        
        printf("Hi! Everyone. This is K. %s from %s. I am %d yrs old and my height is %3.1f cm tall", name,university,age,height);
        
        return 0;
}
        

        