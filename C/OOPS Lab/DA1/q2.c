#include<stdio.h>
int main(){
    int h,t;
    float c;
    printf("Enter the hardness, carbon content and tensile strength of steel in order: ");
    scanf("%d %f %d", &h, &c, &t);
    if (h>60 && c<0.9 && t>6000){

        printf("Grade 10");

    }
    
    else if(h>60 && c<0.9 ){
    
        printf("Grade 9");
    }
    
    else if(c<0.9 && t>6000){

        printf("Grade 8");
    }
    
    else{
     
        printf("invalid");
    }
    return 0;
}