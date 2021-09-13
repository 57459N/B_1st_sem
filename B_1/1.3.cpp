#include <iostream>
#include <cmath>

using namespace std;

int main3()
{
	double x1, x2, x3, x4 = 0;

	cout << "Enter X parametrs (x1 >= x2 >= x3 >= x4): ";
	
	cin >> x1 >> x2 >> x3 >> x4;

	if (x1 > x2 && x2 > x3 && x3 > x4) { cout << x1 << " " << x2 << " " << x3 << " " << x4; }
	if (x1 > x2 && x2 > x4 && x4 > x3) { cout << x1 << " " << x2 << " " << x4 << " " << x3; }
	if (x1 > x3 && x3 > x2 && x2 > x4) { cout << x1 << " " << x3 << " " << x2 << " " << x4; }
	if (x1 > x3 && x3 > x4 && x4 > x2) { cout << x1 << " " << x3 << " " << x4 << " " << x2; }
	if (x1 > x4 && x4 > x2 && x2 > x3) { cout << x1 << " " << x4 << " " << x2 << " " << x3; }
	if (x1 > x4 && x4 > x3 && x3 > x2) { cout << x1 << " " << x4 << " " << x3 << " " << x2; }

	if (x2 > x1 && x1 > x3 && x3 > x4) { cout << x2 << " " << x1 << " " << x3 << " " << x4; }
	if (x2 > x1 && x1 > x4 && x4 > x3) { cout << x2 << " " << x1 << " " << x4 << " " << x3; }
	if (x2 > x3 && x3 > x1 && x1 > x4) { cout << x2 << " " << x3 << " " << x1 << " " << x4; }
	if (x2 > x3 && x3 > x4 && x4 > x1) { cout << x2 << " " << x3 << " " << x4 << " " << x1; }
	if (x2 > x4 && x4 > x1 && x1 > x3) { cout << x2 << " " << x4 << " " << x1 << " " << x3; }
	if (x2 > x4 && x4 > x3 && x3 > x1) { cout << x2 << " " << x4 << " " << x3 << " " << x1; }

	if (x3 > x1 && x1 > x2 && x2 > x4) { cout << x3 << " " << x1 << " " << x2 << " " << x4; }
	if (x3 > x1 && x1 > x4 && x4 > x2) { cout << x3 << " " << x1 << " " << x4 << " " << x2; }
	if (x3 > x2 && x2 > x1 && x1 > x4) { cout << x3 << " " << x2 << " " << x1 << " " << x4; }
	if (x3 > x2 && x2 > x4 && x4 > x1) { cout << x3 << " " << x2 << " " << x4 << " " << x1; }
	if (x3 > x4 && x4 > x1 && x1 > x2) { cout << x3 << " " << x4 << " " << x1 << " " << x2; }
	if (x3 > x4 && x4 > x2 && x2 > x1) { cout << x3 << " " << x4 << " " << x2 << " " << x1; }

	if (x4 > x1 && x1 > x2 && x2 > x3) { cout << x4 << " " << x1 << " " << x2 << " " << x3; }
	if (x4 > x1 && x1 > x3 && x3 > x2) { cout << x4 << " " << x1 << " " << x3 << " " << x2; }
	if (x4 > x2 && x2 > x1 && x1 > x3) { cout << x4 << " " << x2 << " " << x1 << " " << x3; }
	if (x4 > x2 && x2 > x3 && x3 > x1) { cout << x4 << " " << x2 << " " << x3 << " " << x1; }
	if (x4 > x3 && x3 > x1 && x1 > x2) { cout << x4 << " " << x3 << " " << x1 << " " << x2; }
	if (x4 > x3 && x3 > x2 && x2 > x1) { cout << x4 << " " << x3 << " " << x2 << " " << x1; }
	
	return 0;
}

// checkpont for git branch