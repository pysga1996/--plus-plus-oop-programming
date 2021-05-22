#include "Student.h"

namespace class_and_object {

    void ex1() {
        using Student = exercise_1::Student;
        Student s;
        s.name = "Linh";
        s.age = 17;
        s.display();
    }
}
