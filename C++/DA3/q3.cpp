#include <iostream>
using namespace std;

// Function template to find the sum of three numbers
template<typename T>
T sumOfThree(T a, T b, T c) {
    return a + b + c;
}

int main() {
    int n1, n2, n3;
    float f1, f2, f3;

    // Input three integers
    cout << "Enter three integers: ";
    cin >> n1 >> n2 >> n3;

    // Input three floats
    cout << "Enter three floats: ";
    cin >> f1 >> f2 >> f3;

    // Find the sum of integers using the function template
    int sumIntegers = sumOfThree(n1, n2, n3);

    // Find the sum of floats using the function template
    float sumFloats = sumOfThree(f1, f2, f3);

    // Output the results
    cout << "Sum of integers: " << sumIntegers << endl;
    cout << "Sum of floats: " << sumFloats << endl;

    return 0;
}
