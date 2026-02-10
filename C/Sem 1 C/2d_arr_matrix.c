#include <stdio.h>

void main()
{
    int i, j, rows, columns;

    printf("\nEnter no. of rows: ");
    scanf("%d", &rows);
    printf("\nEnter no. of columns: ");
    scanf("%d", &columns);
    int arr[rows][columns];

    for (i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            printf("\nEnter element at %d %d: ", i,j);
	        scanf("%d", &arr[i][j]);
	}
    }
    for (i=0;i<rows;i++){
        for(j=0; j<columns; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}