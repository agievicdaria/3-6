#pragma once
using namespace std;
#include "D1.h"
#include "D2.h"

class D3 : private D1, public D2 {
    int d3;
public:
    D3(int b1, int b2, int d2, int d1, int d3);
    ~D3();
    void show_D3();
};
