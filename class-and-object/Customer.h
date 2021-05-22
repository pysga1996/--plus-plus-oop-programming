#ifndef OOP_CUSTOMER_H
#define OOP_CUSTOMER_H

#include <string>

using namespace std;

namespace class_and_object {

    class Customer {
    public:
        string name;

        Customer();

        explicit Customer(string name);
    };
}


#endif //OOP_CUSTOMER_H
