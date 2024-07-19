#include <iostream>
using namespace std;

class Temperature {
private:
    float centigrade;

public:
    
    Temperature(float c) {
        centigrade = c;
    }

    
    float convertToFahrenheit() {
        return (centigrade * 9 / 5) + 32;
    }

    
    float getCentigrade() {
        return centigrade;
    }

    
    void setCentigrade(float c) {
        centigrade = c;
    }
};


void displayFahrenheit(Temperature t) {
    cout << "Temperature in Fahrenheit: " << t.convertToFahrenheit() << endl;
}

int main() {
    float centigrade;
    cout << "Enter temperature in Centigrade: ";
    cin >> centigrade;

   
    Temperature temp(centigrade);

    
    displayFahrenheit(temp);

    return 0;
}