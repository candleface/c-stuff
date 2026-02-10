#include<stdio.h>
#define MAX 50
void main(){
    int arr1[MAX][MAX], arr2[MAX][MAX], arrsum[MAX][MAX];
    int row1, row2, col1, col2, sum = 0;
    int i, j;

    printf("\nEnter rows and columns of matrix one: ");
    scanf("%d%d",row1, col1);
    printf("Enter elements:\n");
    for (i = 0; i<row1; i++){
        for(j = 0; j< col1; j++){
            scanf("%d", arr1[i][j]);
        }
    }
    for (i = 0; i<row1; i++){
        for(j = 0; j< col1; j++){
            printf("\nyour matrix one is: \n");
            printf("%d", arr1[i][j]);
        }
        printf("\n");
    }
    
    printf("\nenter rows and columns of matrix two: ");
    scanf("%d %d",row2, col2);
    printf("Enter elements:\n");
    for (i = 0; i<row2; i++){
        for(j = 0; j< col2; j++){
            scanf("%d", arr1[i][j]);
        }
    }  
    for (i = 0; i<row2; i++){
        for(j = 0; j< col2; j++){
            printf("\nyour matrix two is: \n");
            printf("%d", arr1[i][j]);
        }
        printf("\n");
    } 

    if(row1 != row2 && col1 != col2){
        printf("The dimensions of the matrises aren't equal. Cannot add");
    }
    else{ 
        for(i = 0; i<row1 ; i++ ){
            for(j = 0; j < col1; j++){
                sum = arr1[i][j] + arr2[i][j];
                arrsum[i][j] = sum;
            }
            sum = 0;
        }
    }
    for (i = 0; i<row2; i++){
        for(j = 0; j< col2; j++){
            printf("\nyour matrix sum is: \n");
            printf("%d", arr1[i][j]);
        }
        printf("\n");
    }
}