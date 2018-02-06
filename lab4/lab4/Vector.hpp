#pragma once

class Vector {
private:
	static const int DEFAULT_VAL = 0;
	int x;
	int y;
	int z;

public:
	Vector();
	Vector(const Vector &v2);
	int get_X();
	int get_Y();
	int get_Z();
	void set_X(int);
	void set_Y(int);
	void set_Z(int);
	void clear();
};