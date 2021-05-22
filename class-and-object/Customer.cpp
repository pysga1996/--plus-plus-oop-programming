#include "Customer.h"

namespace class_and_object {

    Customer::Customer() = default;

    Customer::Customer(string name) {
        this->name = move(name);
    }
}


