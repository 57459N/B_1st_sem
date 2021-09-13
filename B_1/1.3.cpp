#include <iostream>
#include <cmath>

using namespace std;

int main3()
{
	double x1, x2, x3, x4 = 0;

	cout << "Enter X parametrs (x1 >= x2 >= x3 >= x4): ";
	
	cin >> x1 >> x2 >> x3 >> x4;

	double temp = 0;
	if (x1 <= x2)
	{
		temp = x1;
		x1 = x2;
		x2 = temp;
	}
	if (x2 <= x3)
	{
		temp = x2;
		x2 = x3;
		x3 = temp;
	}
	if (x3 <= x4)
	{
		temp = x3;
		x3 = x4;
		x4 = temp;
	}
	if (x1 <= x2)
	{
		temp = x1;
		x1 = x2;
		x2 = temp;
	}
	if (x2 <= x3)
	{
		temp = x2;
		x2 = x3;
		x3 = temp;
	}
	if (x1 <= x2)
	{
		temp = x1;
		x1 = x2;
		x2 = temp;
	}
	cout << endl << "Sorted: " << x1 << " " << x2 << " " << x3 << " " << x4 << endl;
	return 0;
}

// checkpont for git branch 