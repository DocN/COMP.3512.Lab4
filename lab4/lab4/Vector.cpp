#pragma once
#include <iostream>
#include "Vector.hpp"
#include <stdio.h>      /* printf */
#include <math.h>       /* sqrt */
#include <array>
#include <vector>

using namespace std;

Vector::Vector() {
	clear();
}

Vector::Vector(const Vector &v2) {
	x = v2.x;
	y = v2.y;
	z = v2.y;
}

Vector::~Vector() {

}
double Vector::get_X() {
	return x;
}
double Vector::get_Y() {
	return y;
}

double Vector::get_Z() {
	return z;
}

void Vector::set_X(double _x) {
	x = _x;
}
void Vector::set_Y(double _y) {
	y = _y;
}
void Vector::set_Z(double _z) {
	z = _z;
}

//is it clear what's going on?
void Vector::clear() {
	x = DEFAULT_VAL;
	y = DEFAULT_VAL;
	z = DEFAULT_VAL;
}

ostream& operator<<(ostream& os, const Vector& theVector)
{
	os << "X = " << theVector.x << endl;
	os << "Y = " << theVector.y << endl;
	os << "Z = " << theVector.z << endl;
	return os;
}



