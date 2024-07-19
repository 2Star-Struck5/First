#include <iostream>

using namespace std;

class Prime {
    private:
        int num;
    public:
        Prime(int n) { num = n; } // constructor
        Prime(const Prime& p) { num = p.num; } // copy constructor
        bool isPrime() {
            if (num <= 1) 
                return false;
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) 
                    return false;
            }
            return true;
        }
        void print() {
            if (isPrime()) cout << num << " is a prime number." << endl;
            else cout << num << " is not a prime number." << endl;
        }
};

int main() {
     int number;
    cout << "Enter a number: ";
    cin >> number;
    Prime p1(number);
    Prime p2(p1); // copy constructor call
    
    p2.print();

    return 0;
}