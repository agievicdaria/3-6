#include "D1.h"
#include <iostream>
using namespace std;

D1::D1(int b1, int d1) : B1(b1), d1(d1) {}

D1::~D1() {}

void D1::show_D1() {
    cout << "class D1:" << endl;
    show_B1();
    cout << "show_D1()" << endl
    << "D1::d1 = " << d1 << endl
    << endl;
}
