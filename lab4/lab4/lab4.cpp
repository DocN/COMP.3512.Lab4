#include <iostream>
#include "Vector.hpp"
using namespace std;

int main() {
	Vector * newVec = new Vector();
	cout << *newVec << endl;

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

	system("PAUSE");
	return 0;
}