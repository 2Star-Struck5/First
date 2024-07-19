#include<stdio.h>
void display(int row, int col, int mat[row][col] ){
  int i,j;
  printf("\n");
  for (i=0;i<row;i++){
    for (j=0;j<col;j++){
      printf("%d\t", mat[i][j]);
    }
    printf("\n");
  }
  
}
int main(){
  int row1, col1, row2, col2,i,j;
  printf("Enter the number of rows and columns of the first matrix: ");
  scanf("%d %d", &row1, &col1);

  int arr1[row1][col1];

  for (i=0;i<row1;i++){
    for (j=0;j<col1;j++){
      
      printf("\nEnter the element [%d][%d]: ",i,j );
      scanf("%d", &arr1[i][j]);
    }
  }
  
  printf("\nEnter the number of rows and columns of the second matrix: ");
  scanf("%d %d", &row2, &col2);

  int arr2[row2][col2];

  for (i=0;i<row2;i++){
    for (j=0;j<col2;j++){

      printf("\nEnter the element [%d][%d]: ",i,j );
      scanf("%d", &arr2[i][j]);
    }
  }
  display(row1, col1, arr1);
  
  printf("\n\n");

  display(row2, col2, arr2);

  

  if (row1==row2 && col1==col2){
    
    int sum[row1][col1];
    for (i=0;i<row1;i++){
      for (j=0;j<col1;j++){
          sum[i][j] = arr1[i][j]+arr2[i][j];
        }
      }

    printf("\nResultant matrix of sum of matrix 1 and matrix2: \n\n");
  

    display(row1, col1, sum);

    printf("\nTranspose of the resultant matrix is: \n\n");

    for (i=0;i<row1;i++){
      for (j=0;j<col1;j++){

        printf("%d\t", sum[j][i] );

      }
      printf("\n");
    }

    printf("\nDeterminant of the resultant matrix is: \n\n");
    
    int det=0; 
    
      if (row1==2){
        int i=0,j=0;
        det=sum[i][j]*sum[i+1][j+1]-sum[i][j+1]*sum[i+1][j];
        printf("\n%d", det);
      }
      
     
    
  }
  else{
    printf("No. of rows and columns of matrix1 don't match with rows and               columns of matrix2.");
  }


  
  
  return 0;
}