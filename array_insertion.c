#include <stdio.h>

int main() {
    int pos, ele, arr[10];
    printf("eneter the position of the array to insert into:");
    scanf("%d",&pos);
    printf("\nenter the element to enter:");
    scanf("%d",&ele);
    printf("\nenter the elements of the array:");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=10;i<=pos;i--){
        arr[i+1]=arr[i];
    }
    arr[pos]=ele;
    for(int i=0;i<1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}