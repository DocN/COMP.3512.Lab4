#pragma once
#include <iostream>
#include "Vector.hpp"
#include <stdio.h>      /* printf */
#include <math.h>       /* sqrt */
#include <array>
#include <vector>

using namespace std;
/*
Vector - Default Constructor
Parameters 
	N/A
Return 
	N/A
*/
Vector::Vector() {
	clear();
}

/*
Vector - Copy Constructor
Parameters
	Vector v2 - Vector object for copy constructor to copy
Return
	N/A
*/
Vector::Vector(const Vector &v2) {
	x = v2.x;
	y = v2.y;
	z = v2.y;
}

/*
Vector - Destructor
Parameters
	N/A
Return
	N/A
*/
Vector::~Vector() {

}

/*
Vector - get_X() - x variable getter
Parameters
	N/A
Return
	return double x - x coordinate of vector
*/
double Vector::get_X() {
	return x;
}

/*
Vector - get_Y() - y variable getter
Parameters
	N/A
Return
	return double y - y coordinate of vector
*/
double Vector::get_Y() {
	return y;
}

/*
Vector - get_Z() - z variable getter
Parameters
	N/A
Return
	return double z - z coordinate of vector
*/
double Vector::get_Z() {
	return z;
}

/*
Vector - set_X() - x variable setter
Parameters
	double _x - new x value 
Return
	void
*/
void Vector::set_X(double _x) {
	x = _x;
}

/*
Vector - set_Y() - y variable setter
Parameters
	double _y - new y value
Return
	void
*/
void Vector::set_Y(double _y) {
	y = _y;
}

/*
Vector - set_Z() - z variable setter
Parameters
	double _z - new z value
Return
	void
*/
void Vector::set_Z(double _z) {
	z = _z;
}

/*
Vector - clear() - clears x,y,z values by setting them to DEFAULT_VAL = 0
Parameters
	N/A
Return
	void
*/
void Vector::clear() {
	//is it clear what's going on?
	x = DEFAULT_VAL;
	y = DEFAULT_VAL;
	z = DEFAULT_VAL;
}

/*
Overloaded << - Overloaded << output stream for printing vector to console
Parameters
	ostream os - the output stream
	const Vector& theVectore - the vector we're printing coordinates from
Return
	ostream& - return the output stream object
*/
ostream& operator<<(ostream& os, const Vector& theVector)
{
	//print the vectors x,y,z
	os << "X = " << theVector.x << endl;
	os << "Y = " << theVector.y << endl;
	os << "Z = " << theVector.z << endl;
	return os;
}
/*
Vector Overloaded ++ - Overloaded ++ operator for pre-increment of Vector
Parameters
int - empty parameter for telling the difference between pre/post increment
Return
Vector - Vector object after pre-increment
*/
Vector& Vector::operator++() {
	//add one to all coordinates
	x = x + 1;
	y = y + 1;
	z = z + 1;
	return *this;
}

/*
Vector Overloaded ++ - Overloaded ++ operator for post-increment of Vector
Parameters
N/A
Return
Vector - Vector object after post increment
*/
Vector& Vector::operator++(int) {
	//add one to all coordinates
	x = x + 1;
	y = y + 1;
	z = z + 1;
	return *this;
}

/*
Vector Overloaded -- - Overloaded -- operator for pre-deincrement of Vector
Parameters
int - empty parameter for telling the difference between pre/post deincrement
Return
Vector - Vector object after pre-increment
*/
Vector& Vector::operator--() {
	//subtract 1 from all coordinates
	x = x - 1;
	y = y - 1;
	z = z - 1;
	return *this;
}

/*
Vector Overloaded -- (Overloaded -- operator for post-deincrement of Vector)
Parameters
N/A
Return
Vector - Vector object after post deincrement
*/
Vector& Vector::operator--(int) {
	//subtract 1 from all coordinates
	x = x - 1;
	y = y - 1;
	z = z - 1;
	return *this;
}

/*
Vector overloaded = (Overloaded = operator using copy swap method)
Parameters
	Vector rhs -right hand side vector of equal equation 
Return
	Vector& - New vector object being stored into variable we're using equal operator on.
*/
Vector& Vector::operator=(Vector &rhs) {
	swap(*this, rhs);
	return *this;
}

/*
swap - The magical swap function that swaps values of the two vectors input
Parameters 
	Vector& first - the first Vector we're using for copy swap
	Vector& second - the second Vector we're using for copy swap
Return 
	void
*/
void swap(Vector & first, Vector & second) {
	//swap the values!
	swap(first.x, second.x);
	swap(first.y, second.y);
	swap(first.z, second.z);
}

/*
Vector overloaded += operator (Overloaded += operator for plus equal on Vector Objects) 
Parameters 
	Vector& rhs - the right hand side of += operation
Return 
	Vector& - A vector object that we're returning after adding rhs to it.
*/
Vector& Vector::operator+=(Vector& rhs) {
	x = x + rhs.x;
	y = y + rhs.y;
	z = z + rhs.z;
	return *this;
}

/*
Vector overloaded -= operator (Overloaded -= operator for minus equal on Vector Objects)
Parameters
	Vector& rhs - the right hand side of -= operation
Return
	Vector& - A vector object that we're returning after subtracting rhs from this.
*/
Vector& Vector::operator-=(Vector& rhs) {
	x = x - rhs.x;
	y = y - rhs.y;
	z = z - rhs.z;
	return *this;
}
/*
Vector overloaded + operator (Overloaded + operator for adding Vector a to Vector b)
Parameters
	const Vector& a - first Vector we're adding 
	const Vector& b - second Vector we're adding
Return
	Vector& - A new Vector object with Vectors a and b combined
*/
Vector& operator+(const Vector& a, const Vector& b) {
	Vector * newVector = new Vector(a);
	newVector->set_X((a.x + b.x));
	newVector->set_Y((a.y + b.y));
	newVector->set_Z((a.z + b.z));
	return *newVector;
}

/*
Vector overloaded - operator (Overloaded - operator for subtracing Vector b from Vector a
Parameters
	const Vector& a - first Vector we're subtracting
	const Vector& b - second Vector we're subtracting
Return
	Vector& - A new Vector object with b subtracted from a
*/
Vector& operator-(const Vector& a, const Vector& b) {
	Vector * newVector = new Vector(a);
	newVector->set_X((a.x - b.x));
	newVector->set_Y((a.y - b.y));
	newVector->set_Z((a.z - b.z));
	return *newVector;
}

/*
operator* overloaded - accepts two Vectors and b and does product plus sum of the two
Parameters
	const Vector& a - the first Vector that's part of this product and sum
	const Vector& b - the second Vector that's part of this product and sum
Return
	double - the product of a and b values summed together.
*/
double operator*(const Vector& a, const Vector& b) {
	return((a.x * b.x) + (a.y * b.y) + (a.z * b.z));
}

/*
operator* overloaded - accepts a double value and multiplies it by all the coordinates x,y,z
Parameters
	double val - the value we're multiplying x,y,z by
Return
	void
*/
void Vector::operator*(double val) {
	x = x *val;
	y = y *val;
	z = z *val;
}

/*
Vector operator[] overloaded - accepts an integer selector to pick which coordinate x,y,z to return \(bonus ._.)/
Parameters
	int selector - the selector 0=x, 1=y, 2=z
Return
	double - the selected coordinate x or y or z or -1 if input selector is invalid
*/
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

