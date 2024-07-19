#include <iostream>
using namespace std;

class Time {
private:
    int hr;
    int min;

public:
    // Constructor
    Time(int h = 0, int m = 0) {
        hr = h;
        min = m;
    }

    // Overloading + operator to add two time objects
    Time operator+(const Time& t) {
        Time sum;
        sum.min = min + t.min;
        sum.hr = hr + t.hr + sum.min / 60;
        sum.min %= 60;
        return sum;
    }

    // Function to display time
    void display() {
        cout << hr << "hr " << min << "min" << endl;
    }

    // Function to set time
    void setTime(int h, int m) {
        hr = h;
        min = m;
    }
};

int main() {
    int h1, m1, h2, m2;

    // Input for time1
    cout << "Enter hours and minutes for time1: ";
    cin >> h1 >> m1;

    // Input for time2
    cout << "Enter hours and minutes for time2: ";
    cin >> h2 >> m2;

    Time time1(h1, m1);
    Time time2(h2, m2);
    Time result = time1 + time2;
    
    cout << "Input: ";
    time1.display();
    cout << "         ";
    time2.display();
    cout << "Output: ";
    result.display();

    return 0;
}
