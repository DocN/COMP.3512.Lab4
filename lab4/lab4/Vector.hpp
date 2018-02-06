#pragma once
#include <iostream>
using namespace std;

class Vector {

public:
	Vector();
	Vector(const Vector &v2);
	~Vector();
	double get_X();
	double get_Y();
	double get_Z();
	void set_X(double);
	void set_Y(double);
	void set_Z(double);
	void clear();

	friend ostream& operator<<(ostream& os, const Vector& theVector);
	Vector& operator++();
	Vector& operator++(int);
	Vector& operator--();
	Vector& operator--(int);
	Vector& Vector::operator=(Vector &rhs);
	friend void swap(Vector & first, Vector & second);
	Vector& Vector::operator+=(Vector& rhs);
	Vector& Vector::operator-=(Vector& rhs);
	friend Vector& operator+(const Vector& a, const Vector& b);
	friend Vector& operator-(const Vector& a, const Vector& b);
	friend double operator*(const Vector& a, const Vector& b);
	void operator*(double);
	double operator[](int);

private:
	static const int DEFAULT_VAL = 0;
	double x;
	double y;
	double z;
};