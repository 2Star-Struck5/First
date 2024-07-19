#include<stdio.h>
int main(){
    int n,i=0,j=1,k,l;
    printf("Upto how many numbers: ");
    scanf("%d", &n);
    printf("%d\n%d\n",i,j);
    for(k=0;k<n-2;k++){
        l=i+j;
        i=j;
        j=l;
        printf("%d\n", l);
    }
    return 0;
}