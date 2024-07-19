#include<iostream>
using namespace std;
int main(){

    int a;
    cout<<"Number: ";
    cin>>a;

    if (a<10) {
        cout<<"ONES";
    } 
    
    else if (a<100) {
        cout<<"TENS";
    } 

    else if (a<1000) {
        cout<<"HUNDREDS";
    }

    else if (a<10000) {

        cout<<"THOUSANDS";
    }

    else if (a<100000) {

        cout<<"TEN THOUSANDS";
    }

      else if (a<1000000) {

        cout<<"LAKHS";
    }

      else if (a<10000000) {

        cout<<"TEN LAKHS";
    }

    else if (a<100000000) {

        cout<<"CRORES";
    }

    else if (a<1000000000) {

        cout<<"TEN CRORES";
    }

    else if (a<1000000000) {

        cout<<"HUNDRED CRORES";
    }


return 0;

}