#include <iostream>
#include <cstdio>
#include "multi_function.h"
using namespace std;

int main()
{
    float r;
    float l, w;
    cin >> r >> l >> w;
    cout << "Area of circle with radius: [" << r << "] is: [" << area(r) << "]." << endl;
    cout << "Area of a rectangle with l: [" << l << "] * w: [" << w << "] is: [" << area(l, w) << "]." << endl;
}