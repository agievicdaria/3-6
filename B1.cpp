#include "B1.h"
#include <iostream>
using namespace std;

B1::B1(int b1) : b1(b1) {}

B1::~B1() {}

void B1::show_B1() {
    cout << "class B:" << endl;
    cout << "show_B()" << endl
    << "B1::b1 = " << b1 << endl
    << endl;
}
