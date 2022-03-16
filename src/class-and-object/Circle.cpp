#include "Circle.h"

namespace class_and_object {

    Circle::Circle(double radius) {
        this->radius = radius;
    }

    double Circle::getArea() const {
        return 3.14 * radius * radius;
    }

    double Circle::getCircumference() const {
        return 3.14 * 2 * radius;
    }
}