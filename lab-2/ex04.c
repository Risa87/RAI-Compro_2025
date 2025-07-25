#include<stdio.h>
int main()
{
    char name[10];
    int studentid;
    float programming, physics, calculus, gpa;

    printf("Enter your name:\n");
    scanf("%[^\n]",name);

    printf("Enter your student id:\n");
    scanf("%d", &studentid);

    printf("Enter your programming:\n");
    scanf("%f", &programming);

    printf("Enter your physics score:\n");
    scanf("%f", &physics);

    printf("Enter your calculas score:\n");
    scanf("%f", &calculus);

    gpa= (programming + physics + calculus)/3;
    printf("Hi %s(%d) Your GPA is %.2f\n", name, studentid ,gpa);

    return 0;

}



