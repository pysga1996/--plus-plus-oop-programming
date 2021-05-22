#include <iostream>
#include "Student.h"

namespace static_function_and_variable {

    void ex1() {
        using namespace std;
        using Student = exercise_1::Student;
        Student s1("Manh", 19);
        Student s2("Trung", 19);
        Student s3("Kien", 19);
        cout << "Number of students: " << Student::numberOfStudents << endl;
    }
}