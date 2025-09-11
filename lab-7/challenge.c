#include<stdio.h>
#define STUDENTS 3
#define SUBJECTS 4

struct Student{
    char name[21];
    int id;
    float grades[SUBJECTS];
};

int main(){
    struct Student s[STUDENTS];
    float studentAvg[STUDENTS] = {0};
    float subjectAvg[SUBJECTS] = {0};
    for(int i=0; i<STUDENTS; i++){
        printf("Enter name, ID, and 4 grades for student %d:\n", i+1);
        scanf("%s %d %f %f %f %f",s[i].name,
                                  &s[i].id,
                                  &s[i].grades[0],
                                  &s[i].grades[1],
                                  &s[i].grades[2],
                                  &s[i].grades[3]);
    }
    for(int i=0; i<STUDENTS; i++){
        float sum=0;
        for(int j=0; j<SUBJECTS; j++){
            sum += s[i].grades[j];
            subjectAvg[j] += s[i].grades[j];
        } 
        studentAvg[i] = sum /= SUBJECTS;
    }
    int topStudentIndex = 0;
    for(int i=1; i<SUBJECTS; i++){
        if(studentAvg[i] > subjectAvg[topStudentIndex]) {
            topStudentIndex = i;
        }
    }
    for(int j=1; j<SUBJECTS; j++){
        subjectAvg[j] /= STUDENTS;
    };
    for(int j=1; j<SUBJECTS; j++){
        if(subjectAvg[j] > subjectAvg[topStudentIndex]){
            topStudentIndex = j;
        }
    }
    const char *subjects[SUBJECTS] = {"Math","English","Science","History"};
    printf("\nStudent Averages:\n");
    for(int i=0; i<STUDENTS; i++){
        printf("%s (ID: %d): %.2f\n", s[i].name, s[i].id, studentAvg[i]);
    }
    printf("\nTop Student: %s with %.2f\n", s[topStudentIndex].name, studentAvg[topStudentIndex]);

    const char *subject[SUBJECTS] = {"Math","English","Science","History"};
    printf("\nSubject Averages:\n");
    for(int j=0; j<SUBJECTS; j++){
        float sum=0;
        for(int i=0; i<STUDENTS; i++){
            sum += s[i]. grades[j];
        }
        subjectAvg[j] = sum / STUDENTS;

        printf("%s: %.2f\n", subject[j], subjectAvg[j]);
    }
    printf("\nTop Subject: %s with average %.2f\n", subject[topStudentIndex], subjectAvg[topStudentIndex]);

    return 0;
}