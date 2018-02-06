#pragma once

class Vector {
private:
	static const int DEFAULT_SIZE = 0;
	int x;
	int y;
	int z;

public:
	Vector();
	Vector(const Vector &v2);
};