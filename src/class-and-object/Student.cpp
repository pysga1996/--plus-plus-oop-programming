#include "Student.h"
#include <iostream>

namespace class_and_object {

    using namespace std;

    void exercise_1::Student::display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age;
    }

    void exercise_2::Student::display() const {
        cout << "My name is " + name;
    }

    void exercise_2::Student::getInformation() {
        cin >> name;
        cin >> age;
    }

    void exercise_4::Student::display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    void exercise_5::Student::display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    exercise_5::Student::Student() {
        name = "Khanh";
        age = 18;
    }

    void exercise_6::Student::display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    exercise_6::Student::Student(string name, int age) {
        this->name = std::move(name);
        this->age = age;
    }

    exercise_9::Student::Student() = default;

    void exercise_9::Student::display() {

    }

    void exercise_9::Student::getInformation() {

    }

    exercise_10::Student::Student(string name, int age, string gender, double gpa) {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this->gpa = gpa;
    }

    void exercise_10::Student::display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "GPA: " << gpa << endl;
    }
}

