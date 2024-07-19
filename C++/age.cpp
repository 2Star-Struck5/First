#include<iostream>
using namespace std;
int main(){

    int a;
    cout<<"AGE: ";
    cin>>a;

    if (a<12) {

        cout<<"CHILD";
    }

    else if (a<18){

        cout<<"TEEN";

    }

    else if (18<a<60) {
        cout<<"ADULT";
    }

    else if (a>60){
        cout<<"SENIORCITIZEN";
        
    }

    





return 0;


}