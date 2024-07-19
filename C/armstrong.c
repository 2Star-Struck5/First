#include<stdio.h>
int main(){
    int a,b,c,n,sum,i;
    printf("Enter a 3 digit number: ");
    scanf("%d", &n);
    c=n%10;
    b=(n%100)/10;
    a=n/100;
    sum=(a*a*a)+(b*b*b)+(c*c*c);
    if (sum==n)
    {
        printf("%d is an Armstrong number", n);
    }
    else 
    {
        printf("%d is not an Armstrong number", n);
    }
    for(i=0,i=1000),


return 0;

}