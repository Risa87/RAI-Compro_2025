#include<stdio.h>
int main()
{
    int max;
    struct std {
        char name[100];
        int age;
        float score;
    };
    struct std students[3];

    for(int i=0;i<3;i++){
        printf("Enter student %d's name:", i+1);
        scanf(" %[^\n]",students[i].name);

        printf("Enter student %d's age:", i+1);
        scanf("%d",&students[i].age);

        printf("Enter student %d's score:", i+1);
        scanf("%f",&students[i].score);
    }
    printf("\n");

    max=0;
    for(int i=0;i<3;i++){
        if(students[i].score > students[max].score)
        max=i;
    }
    printf("\nThe highest scores belongs to %s at %.1f scores!",students[max].name,students[max].score);

    return 0;
}