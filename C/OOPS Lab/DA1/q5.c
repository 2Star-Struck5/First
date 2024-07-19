#include<stdio.h>
int cube(int n){
    return n*n*n;
}
int main(){
    int o,t,h,i;
    for(i=0;i<1000;i++){
        if (i<10){
            if (cube(i)==i){
                printf("%d\n", i);
            }
        }
        else if (i>=10 && i<100){
            o=i%10;
            t=i/10;
            if(cube(o)+cube(t)==i){
                printf("%d\n", i);
            }
        }else{
             o=i%10;
             t=(i/10)%10;
             h=i/100;
             if(cube(o)+cube(t)+cube(h)==i){
                printf("%d\n", i);
             }

        }

    }
    return 0;
}   
