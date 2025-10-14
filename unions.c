#include<stdio.h>
#include<stdlib.h>
#include<string.h>
union Student{
    int age;
    float marks;
    char usn[20];
};
int main(){
    union Student s1,s2;
    s1.age=19;
    s1.marks=90.9f;
    strcpy(s1.usn[20],"eng24am0325");
    s2.age=20;
    s2.marks=78.8f;
    strcpy(s2.usn,"eng24am0121");

    printf("student 1 usn:%s",s1.usn);
    return 0;
}