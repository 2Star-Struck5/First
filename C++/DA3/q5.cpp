#include <iostream>
using namespace std;

// Base class
class Vaccine {
public:
    // Virtual method
    virtual void putVaccine() {
        cout << "Covid Vaccine" << endl;
    }
};

// Derived class covaxin
class Covaxin : public Vaccine {
public:
    // Override putVaccine() method
    void putVaccine() override {
        cout << "Covaxin" << endl;
    }
};

// Derived class covishield
class Covishield : public Vaccine {
public:
    // Override putVaccine() method
    void putVaccine() override {
        cout << "Covishield" << endl;
    }
};

int main() {
    // Create objects for covaxin and covishield
    Covaxin cx;
    Covishield cs;

    // Create a pointer of type Vaccine and assign the address of cx
    Vaccine* o = &cx;
    // Call putVaccine() method using the o pointer
    o->putVaccine();

    // Assign the o pointer to the address of cs
    o = &cs;
    // Call putVaccine() method again
    o->putVaccine();

    return 0;
}
