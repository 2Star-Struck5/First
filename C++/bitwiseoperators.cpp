#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"num1: ";
    cin>>num1;

    cout<<"num2: ";
    cin>>num2;

    cout<<"Negation"<<endl;
    cout<<"num1: "<<(~num1)<<endl;
    cout<<"num2: "<<(~num2)<<endl;

    //leftshift and rightshift by 1 place
    cout<<"Leftshift"<<endl;
    cout<<"num1: "<<(num1<<1)<<endl;
    cout<<"num2: "<<(num2<<1)<<endl;

    cout<<"Rightshift"<<endl;
    cout<<"num1: "<<(num1>>1)<<endl;
    cout<<"num2: "<<(num2>>1)<<endl;

    //Bitwise OR
    cout<<"Bitwise OR: "<<(num1|num2)<<endl;

    //Bitwise AND
    cout<<"Bitwise AND: "<<(num1&num2)<<endl;

    //Bitwise Exclusive OR
    cout<<"Bitwise Exclusive OR: "<<(num1^num2)<<endl;

    return 0;
    


}