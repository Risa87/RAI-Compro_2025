#include<stdio.h>
int main()
{
    char name[25];
    int age;
    float height;
    float weight;
    char gender;
    char education[50];

    printf("Enter your Name:\n");
    scanf(" %[^\n]",name);
    printf("Enter your age:\n");
    scanf("%d",&age);
    printf("Enter your height:\n");
    scanf("%f",&height);
    printf("Enter your weight:\n");
    scanf("%f",&weight);
    printf("Enter your gender:\n");
    scanf("%s",&gender);
    printf("Enter your education qualification:\n");
    scanf(" %[^\n]",education);

    return(0);
}    
    
 

    

    