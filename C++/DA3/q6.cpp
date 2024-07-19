#include <iostream>

using namespace std;

// Abstract base class Shape
class Shape {
public:
    virtual double area() const = 0; // Pure virtual function
};

// Concrete class Rectangle derived from Shape
class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    
    // Implementation of the area function for Rectangle
    double area() const override {
        return length * width;
    }
};

// Concrete class Triangle derived from Shape
class Triangle : public Shape {
private:
    double base;
    double height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    
    // Implementation of the area function for Triangle
    double area() const override {
        return 0.5 * base * height;
    }
};

int main() {
    double l, w, b, h;

    // Taking input for rectangle
    cout << "Enter length and width of rectangle: ";
    cin >> l >> w;

    // Creating Rectangle object
    Rectangle r1(l, w);

    // Taking input for triangle
    cout << "Enter base and height of triangle: ";
    cin >> b >> h;

    // Creating Triangle object
    Triangle t1(b, h);

    // Displaying areas
    cout << "Area of rectangle: " << r1.area() << endl;
    cout << "Area of triangle: " << t1.area() << endl;

    return 0;
}
