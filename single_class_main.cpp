// single_class_main.cpp
#include <iostream>
#include "single_class.h"
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    singleClass mySingleClass = singleClass(a, b);
    cout << "Sum of mySingleClass = " << mySingleClass.getSum() << endl;
}