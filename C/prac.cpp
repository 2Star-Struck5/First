#include <iostream>
#include <cmath>
using namespace std;

class FD {
    int fdno;
    string name;
    float amt, interestRate, maturityAmt;
    int noOfMonths;

public:
    // Parameterized constructor with default argument for interestRate
    FD(int f = 0, string n = "", float a = 0.0, float r = 3.5, int mo = 0) {
        fdno = f;
        name = n;
        amt = a;
        interestRate = r;
        noOfMonths = mo;
        maturityAmt = calculateMaturityAmt();
    }

    float calculateMaturityAmt() {
        int yr = noOfMonths / 12;
        return amt * pow((1 + interestRate / 100), yr);
    }

    void displayDetails() {
        cout << "FD Number: " << fdno << endl;
        cout << "Name: " << name << endl;
        cout << "Amount: " << amt << endl;
        cout << "Interest Rate: " << interestRate << endl;
        cout << "Maturity Amount: " << maturityAmt << endl;
    }
};

int main() {
    int fdno;
    string name;
    float amt;
    float interestRate;
    int noOfMonths;

    cout << "Enter FD Number: ";
    cin >> fdno;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter Amount: ";
    cin >> amt;
    cout << "Enter Interest Rate: ";
    cin >> interestRate;
    cout << "Enter Number of Months: ";
    cin >> noOfMonths;

    FD fd(fdno, name, amt, interestRate, noOfMonths);
    fd.displayDetails();

    return 0;
}
