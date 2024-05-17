#pragma once 

#include "Box.h"

Box::Box() {
    length = newlength;
    breadth = newbreadth;
    height = newheight;
}

Box::~Box() {

}

double Box::GetVolume() {
    return length * breadth * height;
}

void Box::SetLength(double len) {
    length = len;
}

void Box::Setbreadth(double bre) {
    breadth = bre;
}

void Box::SetLength(double hei) {
    height = hei;
}

// Overload + operator to add two Box objects.

Box Box::operator + (const Box& b)  {
    Box box;

    box.length = this-> length + b.length;
    box.breadth = this-> breadth + b.breadth;
    box.height = this-> height + b.height;

    return box;
}

