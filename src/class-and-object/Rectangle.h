#ifndef OOP_RECTANGLE_H
#define OOP_RECTANGLE_H

namespace class_and_object {

    using namespace std;

    class Rectangle {
    public:
        double width;
        double length;

        void getInformation();

        [[nodiscard]] double getArea() const;

        [[nodiscard]] double getPerimeter() const;

        void display() const;
    };
}


#endif //OOP_RECTANGLE_H
