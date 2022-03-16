#include "Student.h"

namespace static_function_and_variable {

    int exercise_1::Student::numberOfStudents;

    exercise_1::Student::Student(string name, int age)  {
        this->name = move(name);
        this->age = age;
        numberOfStudents++;
    }
}
