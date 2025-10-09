#include<stdio.h>
int main(){
char name[20];
float marks;
int rollno[60];
    //student 1
    printf("Enter name: ");
    scanf("%s",name);
    printf("Enter marks: ");
    scanf("%f",&marks);
    printf("Enter roll number: ");
    scanf("%d",&rollno);
    printf("Name: %s\n",name);
    printf("Marks: %.2f\n",marks);
    printf("Roll number: %d\n",rollno[0]);

    //student 2
    printf("Enter name: ");
    scanf("%s",name);       
    printf("Enter marks: ");
    scanf("%f",&marks); 
    printf("Enter roll number: ");
    scanf("%d",&rollno[1]);
    printf("Name: %s\n",name);
    printf("Marks: %.2f\n",marks);
    printf("Roll number: %d\n",rollno[1]);

    //student 3
    printf("enter student name: ");
    scanf("%s",name); 
    printf("enter roll number: ");
    scanf("%d",&rollno[2]);
    printf("Enter marks: ");
    scanf("%f",&marks); 
    printf("name: %s\n",name);
    printf("roll number: %d\n", rollno[2]);
    printf("marks: %.2f", marks);
    return 0;
}
