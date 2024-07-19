#include<stdio.h>
int main(){
  int n, i;
  printf("Enter the size of the array: ");
  scanf("%d", &n);
  
  int arr[n];

  for (i=0;i<n;i++){
    printf("Enter the elements of array one by one: ");
    scanf("%d", &arr[i]);
  }

  int *ptr=NULL,sum=0;
  ptr=arr;
  for (i=0;i<n;i++){
    sum+=*(ptr+i);
    printf("\n%d", *(ptr+i));
  }
  printf("\n%d", sum);

  
  return 0;
}