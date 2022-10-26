#include "point.h"
#include <cmath>
#include <iostream>


void Point::setX(double x) {
    this->x=x;
}

void Point::setY(double y) {
    this->y=y;
}

double Point::getX() {
    double X=x;
    return X;
}

double Point::getY() {
    double Y=y;
    return Y;
}

Point::Point() {
    setX(0);
    setY(0);
}

Point::Point(Point const& copie){
    x=copie.x;
    y=copie.y;
}

Point::Point(double x, double y) {
    setY(y);
    setX(x);
}
