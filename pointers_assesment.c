#include<stdio.h>
int main(){
    int m=10,n,o;
    int *z = &m;

    printf("address of m:%p",z);
    printf("\naddress of m:%p",&m);
    printf("\nvalue at z:%d", *z);
    printf("\naddress of z:%p",&z);
    printf("\naddress of n:%p",&n);
    printf("\naddress of o:%p",&o);

    return 0;

}