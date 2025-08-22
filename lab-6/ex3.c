#include<stdio.h>
int main()
{
    int marks[5], i , total , max=0;
    for(i=0 ; i<5 ;i++)
    {
        printf("Enter the marks of student %d: ", i+1);
        scanf("%d", &marks[i]);
        total = total + marks[i];
         if(marks[i]>max)
            max = marks[i];
    }
        printf("Total Marks : %d\n", total);
        printf("Highest Marks: %d", max);
    
    return 0;
}