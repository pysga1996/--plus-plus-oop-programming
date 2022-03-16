#include <iostream>
#include "Circle.h"

namespace class_and_object {

    void ex11() {
        using namespace std;
        Circle c(7);
        cout << c.getArea() << endl;
        cout << c.getCircumference() << endl;
    }
}