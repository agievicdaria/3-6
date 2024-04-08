#pragma once
using namespace std;
#include <iostream>

class B2 {
protected:
    int b2;
public:
    B2(int b2);
    virtual ~B2();
    virtual void show_B2();
};
