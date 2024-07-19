#include<iostream>
int main(){
    int arr1[7]={43,52,88,54,8,1,14}, arr2[7]={55,90,43,37,27,44,96},arrM[14];
    int i,k;
    for(i=0;i<7;i++){
        arrM[i]=arr1[i];
    }
    k=i;
    for(i=0;i<7;i++){
        arrM[k]=arr2[i];
        k++;
    }
    std::cout<<"[ ";
    for (i=0;i<k;i++)
        std::cout<<arrM[i]<<","<<" ";
    std::cout<<"]";
   
    
    return 0;

}
