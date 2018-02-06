#include <iostream>
#include "Vector.hpp"
using namespace std;

int main() {
	Vector * newVec = new Vector();

	cout << "testing print overload stream " << endl;
	cout << *newVec << endl;

	cout << "testing copy constructor " << endl;
	Vector * copyVec = new Vector(*newVec);
	cout << *copyVec << endl;

	cout << "Test Pre-Increment" << endl;
	if ((++(*newVec)).get_X() == 1) {
		cout << *newVec << endl;
	}

	cout << "Test post Increment" << endl;
	if ((*newVec)++.get_X() == 2) {
		cout << *newVec << endl;
	}
	
	cout << "Test Pre-Deincrement" << endl;
	if ((--(*newVec)).get_X() == 1) {
		cout << *newVec << endl;
	}

	cout << "Test Post-Deincrement" << endl;
	if ((*newVec)--.get_X() == 0) {
		cout << *newVec << endl;
	}

	
	cout << "output newVec and copyVec that we're going to replace newVec with " << endl;
	(*newVec)++;
	cout << *newVec << endl;
	cout << *copyVec << endl;
	*newVec = *copyVec;
	cout << "Replaced newVec with copyVec Testing copy connstructor output " << endl;
	cout << *newVec << endl;

	//testing += operator
	cout << "Testing += operator " << endl;
	(*copyVec)++;
	(*copyVec)++;
	(*newVec)++;
	cout << "newVec before " << endl;
	cout << *newVec << endl;
	cout << "copyVec before " << endl;
	cout << *copyVec << endl;
	cout << "after *newVec += *copyVec" << endl;
	*newVec += *copyVec;
	cout << *newVec << endl;

	//testing -= operator
	cout << "Testing -= operator " << endl;
	(*copyVec)++;
	(*newVec)++;
	cout << "newVec before " << endl;
	cout << *newVec << endl;
	cout << "copyVec before " << endl;
	cout << *copyVec << endl;
	cout << "after *newVec -= *copyVec" << endl;
	*newVec -= *copyVec;
	cout << *newVec << endl;

	//testing + operator 
	cout << "testing +  operator " << endl;
	cout << "newVec before " << endl;
	cout << *newVec << endl;
	cout << "copyVec before " << endl;
	cout << *copyVec << endl;
	cout << "adding newVec + copyVec " << endl;
	Vector nVec = (*newVec) + (*copyVec);
	cout << nVec;

	//testing + operator 
	cout << "testing - operator " << endl;
	cout << "newVec before " << endl;
	cout << *newVec << endl;
	cout << "copyVec before " << endl;
	cout << *copyVec << endl;
	cout << "subtracting newVec - copyVec " << endl;
	Vector nMinusVec = (*newVec) - (*copyVec);
	cout << nMinusVec;

	system("PAUSE");
	return 0;
}