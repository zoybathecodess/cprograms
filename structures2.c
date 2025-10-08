#include<stdio.h>
struct B{
    int a;
    float b;
} b1,b2;
int main(){
    b1.a=12;
    b2.b=9.34;
    printf("%d\n",b1.a);
    printf("%.2f",b2.b);
    return 0;
}
