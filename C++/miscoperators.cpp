#include<iostream>
using namespace std;
int main(){
    int x=9;
    cout<<"Size of x: "<<sizeof(x)<<endl;
    cout<<"Address of x: "<<&(x)<<endl;

    wchar_t name='D';
    cout<<"Size of name: "<<sizeof(name)<<endl;
    cout<<"Address of name: "<<&(name)<<endl;


    bool condition;
    x!=name ? condition =true: condition = false;

    cout<<"condition: "<<condition<<endl;

    int a=2;
    cout<<(--a)<<endl;
    

    int b=7+a;
    cout<<b;


    return 0;

    

}