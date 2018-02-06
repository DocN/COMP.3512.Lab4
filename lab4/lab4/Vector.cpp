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

Vector& Vector::operator++() {
	x = x + 1;
	y = y + 1;
	z = z + 1;
	return *this;
}

Vector& Vector::operator++(int) {
	x = x + 1;
	y = y + 1;
	z = z + 1;
	return *this;
}

Vector& Vector::operator--() {
	x = x - 1;
	y = y - 1;
	z = z - 1;
	return *this;
}

Vector& Vector::operator--(int) {
	x = x - 1;
	y = y - 1;
	z = z - 1;
	return *this;
}


Vector& Vector::operator=(Vector &rhs) {
	swap(*this, rhs);
	return *this;
}

void swap(Vector & first, Vector & second) {
	swap(first.x, second.x);
	swap(first.y, second.y);
	swap(first.z, second.z);
}

Vector& Vector::operator+=(Vector& rhs) {
	x = x + rhs.x;
	y = y + rhs.y;
	z = z + rhs.z;
	return *this;
}

Vector& Vector::operator-=(Vector& rhs) {
	x = x - rhs.x;
	y = y - rhs.y;
	z = z - rhs.z;
	return *this;
}

Vector& operator+(const Vector& a, const Vector& b) {
	Vector * newVector = new Vector(a);
	newVector->set_X((a.x + b.x));
	newVector->set_Y((a.y + b.y));
	newVector->set_Z((a.z + b.z));
	return *newVector;
}

Vector& operator-(const Vector& a, const Vector& b) {
	Vector * newVector = new Vector(a);
	newVector->set_X((a.x - b.x));
	newVector->set_Y((a.y - b.y));
	newVector->set_Z((a.z - b.z));
	return *newVector;
}

double operator*(const Vector& a, const Vector& b) {
	return((a.x * b.x) + (a.y * b.y) + (a.z * b.z));
}

void Vector::operator*(double val) {
	x = x *val;
	y = y *val;
	z = z *val;
}

double Vector::operator[](int selector) {
	if (selector == 0) {
		return x;
	}
	else if (selector == 1) {
		return y;
	}
	else if (selector == 2) {
		return z;
	}
	return -1;
}

