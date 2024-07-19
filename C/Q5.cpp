#include <iostream>
#include <string>
using namespace std;

class Plant {
private:
    string name;
    int code;
    string type;
    float price;

public:
    
    Plant(string n = "", int c = 0, string t = "", float p = 0.0) {
        name = n;
        code = c;
        type = t;
        price = p;
        cout << "Plant object created with name: " << name << endl;
    }

    // Destructor for destroying the data
    ~Plant() {
        cout << "Plant object destroyed with name: " << name << endl;
    }

    // Function for displaying the plant information
    void display() {
        cout << "Name: " << name << endl;
        cout << "Code: " << code << endl;
        cout << "Type: " << type << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of plants: ";
    cin >> n;

    // Create Plant objects using constructor with user input in a loop
    Plant plants[n];
    string name;
    int code;
    string type;
    float price;

    for (int i = 0; i < n; i++) {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter code: ";
        cin >> code;
        cout << "Enter type: ";
        cin >> type;
        cout << "Enter price: ";
        cin >> price;

        plants[i] = Plant(name, code, type, price);
    }

    // Display the plant information
    for (int i = 0; i < n; i++) {
        plants[i].display();
    }

    // Destructor called automatically when objects go out of scope

    return 0;
}