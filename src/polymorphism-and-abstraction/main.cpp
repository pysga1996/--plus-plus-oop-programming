#include <iostream>
#include "main.h"

int main() {
    using namespace std;
    int a = 5;
    int *p = &a;
    cout << (unsigned long) p;
}
