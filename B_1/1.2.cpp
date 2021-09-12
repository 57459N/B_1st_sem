#include <iostream>
#include <cmath>


using namespace std;

int main2()
{
	double R, x, y = 0;

	cout << "Enter the Radius: ";
	cin >> R;

	cout << "Enter X coordinate: ";
	cin >> x;

	cout << "Enter Y coordinate: ";
	cin >> y;

	/*
	bool y1 = x * y < 0;
	bool y2 = pow((abs(x) - R), 2) + pow(y, 2) <= pow(R, 2);  От преподавателя
	*/

	if (x > 0 and y > 0 || x < 0 and y < 0 || abs(x) > R || abs(y) > R)
	{
		cout << "\nPoint (X;Y) not included into zone\n";
		return 0;
	}

	if (x < 0 and y > 0)
	{
		double gip2 = sqrt((R+x) * (R + x) + y * y);

		if (gip2 > R ) 
		{
			cout << "\nPoint (X;Y) is not into zone\n";
			return 1; 
		}

		cout << "\nPoint (X;Y) is into zone\n";
		return 0;
	}

	if (x > 0 and y < 0)
	{ 
		double gip4 = sqrt((R - x) * (R - x) + y * y);

		if (gip4 > R)
		{
			cout << "\nPoint (X;Y) is not into zone\n";
			return 1;
		}

		cout << "\nPoint (X;Y) is into zone\n";
		return 0;
	}

	cout << "\nInvalid type of variable\n";
	return 1;
	
}