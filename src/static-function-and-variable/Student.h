#ifndef OOP_STUDENT_H
#define OOP_STUDENT_H

#include <iostream>

namespace static_function_and_variable {

    using namespace std;

    namespace base {

        class Student {

        };
    }

    namespace exercise_1 {

        class Student : base::Student {

        private:
            string name;
            int age;
        public:
            static int numberOfStudents;

            Student(string name, int age);
        };
    }
}

#endif //OOP_STUDENT_H
