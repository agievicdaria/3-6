#include "D2.h"
#include <iostream>
using namespace std;

D2::D2(int b2, int d2) : B2(b2), d2(d2) {}

D2::~D2() {}

void D2::show_D2() {
    cout << "class D2:" << endl;
    show_B2();
    cout << "show_D2()" << endl
    << "D2::d2 = " << d2 << endl
    << endl;
}
