#include<stdio.h>
#include<stdlib.h>

struct Student{
    int rollno;
    char name[20];
    int marks;
};
int main(){
    int n;
    printf("enter the number of students:\n");
    scanf("%d",&n);
    struct Student s[n];

    for(int i=0;i<n;i++){
        printf("Enter student details of student %d:\n", i+1);
        printf("enter roll no:\n");
        scanf("%d",&s[i].rollno);

        printf("enter name:\n");
        scanf("%s", s[i].name);

        printf("enter marks:\n");
        scanf("%d",&s[i].marks);
    }


    for(int i=0;i<n;i++){
    printf("\nDisplay Student details:\n");
    printf("Roll No:%d", s[i].rollno);
    printf("\nName:%s",s[i].name);
    printf("\nMarks:%d",s[i].marks);
    }
    return 0;
  
}
