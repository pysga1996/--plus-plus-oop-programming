#include <iostream>
#include "Rectangle.h"

namespace class_and_object {

    void Rectangle::getInformation() {
        using namespace std;
        cout << "Enter width: " << endl;
        cin >> width;
        cout << "Enter length: " << endl;
        cin >> length;
    }

    double Rectangle::getArea() const {
        return width * length;
    }

    double Rectangle::getPerimeter() const {
        return (width + length) * 2;
    }

    void Rectangle::display() const {
        cout << "Area: " << getArea() << endl;
        cout << "Perimeter: " << getPerimeter() << endl;
    }

}

