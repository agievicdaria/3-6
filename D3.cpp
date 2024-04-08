#include "D3.h"
#include <iostream>
using namespace std;

D3::D3(int b1, int b2, int d2, int d1, int d3) : D1(b1, d1), D2(b2, d2), d3(d3) {}

D3::~D3() {}

void D3::show_D3() {
    cout << "class D3:" << endl;
    show_D1();
    show_D2();
    cout << "show_D3()" << endl
    << "D3::d3 = " << d3 << endl
    << endl;
}
