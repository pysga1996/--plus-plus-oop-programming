#include <iostream>
#include "Array.h"

namespace class_and_object {

    void ex8() {
        using namespace std;
        cout << "before block" << endl;
        {
            Array a{};
        }
        cout << "after block" << endl;
    }
}