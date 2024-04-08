#pragma once
using namespace std;
#include "B1.h"

class D1 : public B1 {
protected:
    int d1;
public:
    D1(int b1, int d1);
    ~D1();
    void show_D1();
};
