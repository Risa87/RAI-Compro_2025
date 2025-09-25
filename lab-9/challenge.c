#include<stdio.h>
#include<string.h>
#define NAME_MAX_LEN 100

typedef struct{
    char name[NAME_MAX_LEN +1];
    int grade; /*0..100*/
}Student;

double average_grade(const Student*s, int n){
    int sum = 0;
    for(int i=0; i<n; ++i) sum += s[i].grade;
    return n? (double)sum/ (double)n : 0.0;
}

int max_grade(const Student*s, int n){
    int mx = s[0].grade;
    for(int i=1; i<n; ++i) 
    if(s[i].grade>mx) mx = s[i].grade;
    return mx;
}

int min_grade(const Student*s, int n){
    int mn = s[0].grade;
    for(int i=1; i<n; ++i) 
    if(s[i].grade<mn) mn = s[i].grade;
    return mn;
}

void printf_passed(const Student*s, int n){
    for(int i=0; i<n; ++i)
    if(s[i].grade >= 60){
        printf("%s\n", s[i].name);
    }
}

int main(){
    int n;
    printf("Enter number of student: ");
    if(scanf("%d", &n) != 1 || n<=0){
        return 0;
    }

Student students[n];

for(int i=0; i<n; ++i){
    printf("\nEnter name of student %d: ", i+1);
    if(scanf("%100[^\n]", students[i].name) !=1){
        return 0;
    }

    printf("Enter grade of %s: ", students[i].name);
    if(scanf("%d", &students[i].grade) !=1){
        return 0;
    }
}

printf("\n---Results---\n");
printf("Average grade: %.2f\n", average_grade(students, n));
printf("Highest gradde: %d\n", max_grade(students, n));
printf("Lowest grade: %d\n", min_grade(students, n));

printf("\nStudents who passed:\n");
printf_passed(students,n);

return 0;
}