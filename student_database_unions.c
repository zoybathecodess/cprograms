/*Create a UNION called "Student" with members USN, age, and total marks. Write a C program to input data
for two students, display their information, and find the average of total marks.
NOTE: Input two sample data for students and display the same. Get input data dynamically*/

#include<stdio.h>
#include<stdlib.h>

union Student{
    char USN[15];
    int age;
    float total_marks;
};
int main(){
    float sum=0.0, avg_marks;
    int n; //number of students to take as input
    union Student *sptr;
    printf("enter the number of students:");
    scanf("%d",&n);

sptr= (union Student *)malloc(n * sizeof(union Student));

for(int i=0;i<n;i++){
    printf("enter student details:");
    printf("\nenter usn:");
    scanf("%s",sptr[i].USN);

    printf("\nthe usn entered is: %s",sptr[i].USN);

    printf("\nenter the age of the student:");
    scanf("%d",&sptr[i].age);

    printf("\nthe age entered is:%d",sptr[i].age);

    printf("\nenter the total marks:");
    scanf("%f",&sptr[i].total_marks);

    printf("the total marks entered is: %f",sptr[i].total_marks);

    sum+=sptr[i].total_marks;
}

avg_marks=sum/n;
printf("the average marks is:%f",avg_marks);

free(sptr);

return 0;
}