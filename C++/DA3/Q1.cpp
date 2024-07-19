#include <iostream>
#include <string>

using namespace std;

// Function to swap two integers
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Overloading the swap function for floats
void swap(float& a, float& b) {
    float temp = a;
    a = b;
    b = temp;
}

// Overloading the swap function for strings
void swap(string& a, string& b) {
    string temp = a;
    a = b;
    b = temp;
}

int main() {
    int n1 , n2;
    float f1 , f2;
    string s1 , s2;
    
    cout<<"Enter num1 and num2"<<endl;
    cin>>n1>>n2;
    
    cout<<"Enter float1 and float2"<<endl;
    cin>>f1>>f2;
    
    cout<<"Enter string1 and string2"<<endl;
    cin>>s1>>s2;

    cout << "Before swapping:" << endl;
    cout << "num1 = " << n1 << ", num2 = " << n2 << endl;
    cout << "floatVal1 = " << f1 << ", floatVal2 = " << f2 << endl;
    cout << "strVal1 = " << s1 << ", strVal2 = " << s2 << endl;

    // Using function overloading for swapping
    swap(n1, n2); // Swap integers
    swap(f1, f2); // Swap floats
    swap(s1, s2); // Swap strings

    cout << "\nAfter swapping:" << endl;
    cout << "num1 = " << n1 << ", num2 = " << n2 << endl;
    cout << "floatVal1 = " << f1 << ", floatVal2 = " << f2 << endl;
    cout << "strVal1 = " << s1 << ", strVal2 = " << s2 << endl;

    return 0;
}
