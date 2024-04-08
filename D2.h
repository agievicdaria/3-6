#pragma once
using namespace std;
#include "B2.h"

class D2 : private B2 {
protected:
    int d2;
public:
    D2(int b2, int d2);
    ~D2();
    void show_D2();
};
