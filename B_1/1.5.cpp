#include <iostream>
#include <cmath>

using namespace std;



int main5()
{
	double  x1, x2, x3,
			y1, y2, y3,
			x, y = 0;

	cout << "\nEnter cordinates of the first point (x y): ";
	cin >> x1 >> y1;

	cout << "\nEnter cordinates of the second point (x y): ";
	cin >> x2 >> y2;

	cout << "\nEnter cordinates of the third point (x y): ";
	cin >> x3 >> y3;

	cout << "\nEnter cordinates of the CONTROL point (x y): ";
	cin >> x >> y;

	double a1 = (x1 - x)* (y2 - y1) - (x2 - x1) * (y1 - y);
	double a2 = (x2 - x) * (y3 - y2) - (x3 - x2) * (y2 - y);
	double a3 = (x3 - x) * (y1 - y3) - (x1 - x3) * (y3 - y);

	if (a1 >= 0 && a2 >= 0 && a3 >= 0 || a1 < 0 && a2 < 0 && a3 < 0)
		cout << "\nControl point is INSIDE the triangle!";
	else
		cout << "\nControl point is OUTSIDE the triangle!";

	return 0;
}

