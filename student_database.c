/*Create a structure called "Student" with members USN, age, and total marks. Write a C program to input data
for two students, display their information, and find the average of total marks.
NOTE: Input two sample data for students and display the same. Get input data dynamically*/
#include<stdio.h>
#include<stdlib.h>

struct Student{
    char USN[15];
    int age;
    float total_marks;
};
int main(){
int n; //number of students to input dynamically 
struct Student *sptr;
float sum =0.0, avg_marks;

printf("enter the number of students:\n");
scanf("%d", &n);

sptr= (struct Student *)malloc(n*sizeof(struct Student));


for(int i=0;i<n;i++){
    printf("enter details for %d students:\n", i+1);
    printf("USN:\n");
    scanf("%s", sptr[i].USN);
    printf("age:\n");
    scanf("%d",&sptr[i].age);
    printf("Total marks:\n");
    scanf("%f\n", &sptr[i].total_marks);
    sum +=sptr[i].total_marks;
}
//display details 
printf("------student details-------");
for(int i=0;i<n;i++){
    printf("USN:%s\n",sptr[i].USN);
    printf("Age:%d\n",sptr[i].age);
    printf("Total Marks:%.2f\n",sptr[i].total_marks);
}
avg_marks=sum/n;
//display average marks
printf("Average of total marks:%.2f",avg_marks);

free(sptr);
return 0;
}