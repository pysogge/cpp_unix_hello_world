// single_class.cpp
#include "single_class.h"

singleClass::singleClass(int x, int y){
    gX = x;
    gY = y;
}

int singleClass::getSum(){
    return gX + gY;
}

void singleClass::setX(int x){
    gX = x;
}

void singleClass::setY(int y){
    gY = y;
}
