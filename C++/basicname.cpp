#include<stdio.h>
int cube(int n){
    return n*n*n;
}
int main(){
    int i,o,t,h,a;
   for(i=100;i<1000;i++){
        o=i%10;
        t=(i/10)/10;
        h=i/100;
        a=o*o*o+t*t*t+h*h*h;
        
        if(a==i){
            printf("%d\n", i);
            }

    }
    return 0;
}