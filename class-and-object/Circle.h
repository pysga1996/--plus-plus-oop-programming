#ifndef OOP_CIRCLE_H
#define OOP_CIRCLE_H

namespace class_and_object {

    class Circle {
    private:
        double radius;
    public:
        Circle(double radius) {
            this->radius = radius;
        }
        double getArea() {
            return 3.14 * radius * radius;
        }
        double getCircumference() {
            return 3.14 * 2 * radius;
        }
    };
}


#endif //OOP_CIRCLE_H
