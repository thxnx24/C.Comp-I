#include "point.h"
#include <iostream>

#ifndef _POINT_H
#define _POINT_H

using namespace std;

int main(){
    Point<int> intPoint(2,5);
    cout << intPoint.getX() << ", " << intPoint.getY() << endl;
}

#endif 