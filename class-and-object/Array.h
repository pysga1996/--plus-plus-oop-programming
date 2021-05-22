#ifndef OOP_ARRAY_H
#define OOP_ARRAY_H

#include <iostream>

namespace class_and_object {

    using namespace std;

    class Array {
    public:
        int *arr;
        int n;

        ~Array() {
            cout << "Destructor called" << endl;
            delete[] arr;
        }
    };
}

#endif //OOP_ARRAY_H
