#include <iostream>
#include <string>

using namespace std;

class Customer {
protected:
    string name;
    string phone_number;
public:
    Customer(const string& name, const string& phone_number) : name(name), phone_number(phone_number) {}

    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "Phone Number: " << phone_number << endl;
    }
};

class Depositor : public Customer {
protected:
    string acc_no;
    double balance;
public:
    Depositor(const string& name, const string& phone_number, const string& acc_no, double balance) : 
        Customer(name, phone_number), acc_no(acc_no), balance(balance) {}

    void display() override {
        Customer::display();
        cout << "Account Number: " << acc_no << endl;
        cout << "Balance: " << balance << endl;
    }
};

class Borrower : public Depositor {
protected:
    string loan_no;
    double loan_amt;
public:
    Borrower(const string& name, const string& phone_number, const string& acc_no, double balance, 
        const string& loan_no, double loan_amt) : 
        Depositor(name, phone_number, acc_no, balance), loan_no(loan_no), loan_amt(loan_amt) {}

    void display() override {
        Depositor::display();
        cout << "Loan Number: " << loan_no << endl;
        cout << "Loan Amount: " << loan_amt << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of customers: ";
    cin >> n;
    cin.ignore(); // Clear the input buffer

    Borrower* customers[n];

    for (int i = 0; i < n; ++i) {
        string name, phone_number, acc_no, loan_no;
        double balance, loan_amt;

        cout << "Enter customer name: ";
        getline(cin, name);
        cout << "Enter phone number: ";
        getline(cin, phone_number);
        cout << "Enter account number: ";
        getline(cin, acc_no);
        cout << "Enter account balance: ";
        cin >> balance;
        cin.ignore(); // Clear the input buffer
        cout << "Enter loan number: ";
        getline(cin, loan_no);
        cout << "Enter loan amount: ";
        cin >> loan_amt;
        cin.ignore(); // Clear the input buffer

        customers[i] = new Borrower(name, phone_number, acc_no, balance, loan_no, loan_amt);
    }

    cout << "\nCustomer Details:\n";
    for (int i = 0; i < n; ++i) {
        customers[i]->display();
        cout << endl;
        delete customers[i]; // Free allocated memory
    }

    return 0;
}
