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

private:
	static const int DEFAULT_VAL = 0;
	double x;
	double y;
	double z;
};