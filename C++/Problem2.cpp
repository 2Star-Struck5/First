#include<iostream>
using namespace std;
int main(){
    bool exp1,exp2;

    cout<<"exp1: ";
    cin>>exp1;

    cout<<"exp2: ";
    cin>>exp2;

    cout<<"Logical and: "<<(exp1&&exp2)<<endl;
    cout<<"Logical or: "<<(exp1||exp2)<<endl;
    cout<<"Logical not of exp 1: "<<( !exp1)<<endl;
    cout<<"Logical not of exp 2: "<<( !exp2)<<endl;

    return 0;

}