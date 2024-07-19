#include<iostream>
using namespace std;
int main(){
    int num,x;

    cout<<"Number: ";
    cin>>num;
    cout<<"Variable x: ";
    cin>>x;
    
    cout<<"Number: "<<num<<endl;
    cout<<"X: "<<x<<endl;

    cout<<"Num + x: "<<(num+=x)<<endl;
    cout<<"Num - x: "<<num - x<<endl;
    cout<<"Num / x: "<<(num/x)<<endl;
    cout<<"Remainder of num and x: "<<(num%x)<<endl;

    

    return 0;
    
}