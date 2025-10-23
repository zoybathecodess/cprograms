#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int num =10;
    ptr =&num;
    printf("value at ptr:%d",*ptr);
    printf("\naddress of num:%p", &num);
    printf("\naddress of ptr:%p",&ptr);
    printf("\naddress of num:%p",ptr);
    printf("\nvalue at num:%d",num);
    return 0;
}