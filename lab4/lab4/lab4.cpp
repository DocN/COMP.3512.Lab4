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
	cout << endl;

	cout << "Test Pre-Increment" << endl;
	if ((++(*newVec)).get_X() == 1) {
		cout << *newVec << endl;
		cout << endl;
	}

	cout << "Test post Increment" << endl;
	if ((*newVec)++.get_X() == 2) {
		cout << *newVec << endl;
		cout << endl;
	}
	
	cout << "Test Pre-Deincrement" << endl;
	if ((--(*newVec)).get_X() == 1) {
		cout << *newVec << endl;
		cout << endl;
	}

	cout << "Test Post-Deincrement" << endl;
	if ((*newVec)--.get_X() == 0) {
		cout << *newVec << endl;
		cout << endl;
	}

	
	cout << "output newVec and copyVec that we're going to replace newVec with " << endl;
	(*newVec)++;
	cout << *newVec << endl;
	cout << *copyVec << endl;
	*newVec = *copyVec;
	cout << "Replaced newVec with copyVec Testing copy connstructor output " << endl;
	cout << *newVec << endl;
	cout << endl;

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
	cout << endl;

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
	cout << endl;

	//testing + operator 
	cout << "testing +  operator " << endl;
	cout << "newVec before " << endl;
	cout << *newVec << endl;
	cout << "copyVec before " << endl;
	cout << *copyVec << endl;
	cout << "adding newVec + copyVec " << endl;
	Vector nVec = (*newVec) + (*copyVec);
	cout << nVec;
	cout << endl;

	//testing + operator 
	cout << "testing - operator " << endl;
	cout << "newVec before " << endl;
	cout << *newVec << endl;
	cout << "copyVec before " << endl;
	cout << *copyVec << endl;
	cout << "subtracting newVec - copyVec " << endl;
	Vector nMinusVec = (*newVec) - (*copyVec);
	cout << nMinusVec;
	cout << endl;

	//testing * operator with two inputs
	cout << "testing * operator with two inputs" << endl;
	cout << "curent newVec" << endl;
	cout << (*newVec);
	cout << "current copyVec" << endl;
	cout << (*copyVec);
	cout << "product double product sum of newVec * copyVec" << endl;
	cout << ((*newVec) * (*copyVec)) << endl;
	cout << endl;

	//testing * operator for input double
	cout << "Original newVec before * operator test " << endl;
	cout << *newVec;
	cout << "multiply newVec by 50 " << endl;
	((*newVec) * 50.00);
	cout << *newVec;
	cout << "multiply newVec by 2.15 " << endl;
	((*newVec) * 2.15);
	cout << *newVec;
	cout << endl;

	//testing bonus meme [] 
	cout << "Setting x=5, y=10,  z=20 for newVec " << endl;
	newVec->set_X(5);
	newVec->set_Y(10);
	newVec->set_Z(20);
	cout << *newVec;
	cout << "testing output with overloaded [] for [0],[1],[2]" << endl;
	cout << ((*newVec)[0]) << endl;
	cout << ((*newVec)[1]) << endl;
	cout << ((*newVec)[2]) << endl;
	
	cout << "Testing Completed " << endl;
	system("PAUSE");
	return 0;
}