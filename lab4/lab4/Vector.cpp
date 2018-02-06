#pragma once
#include <iostream>
#include "Vector.hpp"
#include <stdio.h>      /* printf */
#include <math.h>       /* sqrt */
#include <array>
#include <vector>

Vector::Vector() {
	x = DEFAULT_SIZE;
	y = DEFAULT_SIZE;
	z = DEFAULT_SIZE;
}

Vector::Vector(const Vector &v2) {
	x = v2.x;
	y = v2.y;
	z = v2.y;
}

int Vector::get_X() {
	return x;
}
int Vector::get_Y() {
	return y;
}

int Vector::get_Z() {
	return z;
}

void Vector::set_X(int _x) {
	x = _x;
}
void Vector::set_Y(int _y) {
	y = _y;
}
void Vector::set_Z(int _z) {
	z = _z;
}

