#include <iostream>
#include <string>
using namespace std;


class worker {
public:
    int code;
    string name; 
    float salary;

   
    worker(int c, string n, float s) : code(c), name(n), salary(s) {}
};


class officer {
public:
    float DA, HRA;

   
    officer(float d, float h) : DA(d), HRA(h) {}
};


class manager : public worker, public officer {
public:
    float TA;
    float gross_sal;

   
    manager(int c, string n, float s, float d, float h)
        : worker(c, n, s), officer(d, h) {
        TA = 0.10 * salary; // 10% of salary
        gross_sal = salary + DA + HRA + TA;
    }

    
    void print_details() {
        cout << "Code: " << code << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "DA: " << DA << endl;
        cout << "HRA: " << HRA << endl;
        cout << "TA: " << TA << endl;
        cout << "Gross Salary: " << gross_sal << endl;
    }
};

int main() {
    int code;
    string name; 
    float salary, DA, HRA;

    cout << "Enter code: ";
    cin >> code;
    cin.ignore(); 
    cout << "Enter name: ";
    getline(cin, name); 
    cout << "Enter salary: ";
    cin >> salary;
    cout << "Enter DA: ";
    cin >> DA;
    cout << "Enter HRA: ";
    cin >> HRA;

    manager mgr(code, name, salary, DA, HRA);
    mgr.print_details();

    return 0;
}
