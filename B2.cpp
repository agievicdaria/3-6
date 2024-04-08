#include "B2.h"
#include <iostream>
using namespace std;

B2::B2(int b2) : b2(b2) {}

B2::~B2() {}

void B2::show_B2() {
    cout << "class B:" << endl;
    cout << "show_B()" << endl
    << "B2::b2 = " << b2 << endl
    << endl;
}
