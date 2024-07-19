#include<stdio.h>
int main(){
    int row1, col1, row2, col2, i, j, k, l;
    printf("Enter the number of rows for matrix 1: ");
    scanf("%d", &row1);
    printf("Enter the number of columns for matrix 1: ");
    scanf("%d", &col1);


    int arr1[row1][col1], arr2[row2][col2];

    for (i=0; i<row1; i++){
        for (j=0; j<col1; j++){
            printf("Enter the element at position array1[%d][%d]: ",i,j);
            scanf("%d", &arr1[i][j]);
        }

    }

    printf("Enter the number of rows matrix 2: ");
    scanf("%d", &row2);
    printf("Enter the number of columns matrix 2: ");
    scanf("%d", &col2);

    for (k=0; k<row2; k++){
        for (l=0; l<col2; l++){
            printf("Enter the element at position array2[%d][%d]: ",i,j);
            scanf("%d", &arr2[i][j]);
        }

    

    if (row1==row2 && col1==col2){

         printf("\nSum of two matrices: \n");
         int matc[row1][col2];
            for (i = 0; i < row1; ++i){
                for (j = 0; j < col1; ++j) {
                    printf("%d ", matc[i][j]);
                    if (j == col1 - 1) {
                        printf("\n\n");
            }
        }

    }

    
}
    return 0;
}