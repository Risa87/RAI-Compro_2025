#include<stdio.h>
int main()
{
    int inti;
    float value;
    char name;

    printf("Please enter an integer value: ");
    scanf("%d",&inti);
    printf("You entered; %d\n",inti);

    printf("Please enter a float value: ");
    scanf("%f",&value);
    printf("You entered; %.1f\n",value);

    printf("Please enter a character: ");
    scanf("%s",&name);
    printf("You entered; %c\n",name);
   
   
    
}