#include <stdio.h>

int main() {
    
    int rows,cols;

    printf("enter the number of rows:");
    scanf("%d",&rows);
    printf("enter the number of cols:");
    scanf("%d",&cols);

    int arr[rows][cols];
     
    int counter=0;

    printf("enter the elements one by one:");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==0){
            counter++;
        }
        }
    }

    int total_elements=rows*cols;

    //print the matrix
    printf("matrix entered:\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    if(counter>=total_elements/2){
        printf("the matrix is a sparse matrix");
    }
    else{
        printf("the matrix is not a sparse matrix");
    }
    
    return 0;
}