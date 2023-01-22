#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

/*
	Source by Programiz (https://www.programiz.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {

	cout << "-44.01e-3" << " to Double = " << atof("-44.01e-0") << endl;
	cout << "-44.01e-3" << " to Double = " << atof("-44.01e-3") << endl;

	cout << "0xf1bc" << " to Double = " << atof("0xf1bc") << endl;
	cout << "0xf1bc.51" << " to Double = " << atof("0xf1bc.51") << endl;

	_getch();
	return 0;
}