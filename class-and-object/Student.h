#ifndef OOP_STUDENT_H
#define OOP_STUDENT_H

#include <string>

namespace class_and_object {

    using namespace std;

    namespace base {

        class Student {
        };
    }

    namespace exercise_1 {

        class Student : base::Student {

        public:
            string name;
            int age;

            virtual void display() const;
        };
    }

    namespace exercise_2 {

        class Student : public exercise_1::Student {

        public:
            void display() const override;

            void getInformation();
        };
    }

    namespace exercise_4 {

        class Student : base::Student {
        private:
            string name = "Default";
            int age = 0;
        public:
            void display();
        };
    }

    namespace exercise_5 {

        class Student {
        private:
            string name;
            int age;
        public:
            Student();

            void display();
        };
    }

    namespace exercise_6 {

        class Student {
        private:
            string name;
            int age;
        public:
            Student(string name, int age);

            void display();
        };
    }

    namespace exercise_9 {

        class Student {
        private:
            string name;
            int age{};
        public:
            Student();

            void getInformation();

            void display();
        };
    }

    namespace exercise_10 {

        using namespace std;

        class Student {
            string name;
            int age;
            string gender;
            double gpa;
        public:
            Student(string name, int age, string gender, double gpa);
            void display();
        };
    }

}

#endif //OOP_STUDENT_H
