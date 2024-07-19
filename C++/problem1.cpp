#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;

    int c;
    c=a;
    a=b;
    b=c;

    cout<<"Value of a: "<<a<<endl<<"Value of b: "<<b<<endl;
    cout<<"Excellent Job Dhruv!!!";
    return 0;

}