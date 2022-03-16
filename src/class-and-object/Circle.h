#ifndef OOP_CIRCLE_H
#define OOP_CIRCLE_H

namespace class_and_object {

    class Circle {
    private:
        double radius{};
    public:
        explicit Circle(double radius);
        [[nodiscard]] double getArea() const;
        [[nodiscard]] double getCircumference() const;
    };
}


#endif //OOP_CIRCLE_H
