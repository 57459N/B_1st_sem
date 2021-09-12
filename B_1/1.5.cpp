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

	/*double side12 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	double side23 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	double side31 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

	double p = (side12 + side23 + side31) / 2;
	double S = sqrt(p * (p - side12) * (p - side23) * (p - side31));

	//1 / 2 a b sin(e) = S
	//e = arcsin(2S / ab)
	double ss = 2 * S / side12 / side31;

	double a1 = asin(2 * S / side12 / side31) * 180 / 3.141592654;
	*/

	double barierA = (x - x1) * (y2 - y1) / (x2 - x1) + y1;
	double barierB = (x - x2) * (y3 - y2) / (x3 - x2) + y2;
	double barierC = (x - x3) * (y2 - y3) / (x2 - x3) + y3;

	cout << barierA << " " << barierB << " " <<barierC;

	return 0;
}

/*void check(x1, y1, x2, y2, x3, y3, x4, y4)
{
	double Ua, Ub, numerator_a, numerator_b, denominator;

	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
	denominator = (y4 - y3) * (x1 - x2) - (x4 - x3) * (y1 - y2);
	if (denominator == 0) {
		if ((x1 * y2 - x2 * y1) * (x4 - x3) - (x3 * y4 - x4 * y3) * (x2 - x1) == 0 && (x1 * y2 - x2 * y1) * (y4 - y3) - (x3 * y4 - x4 * y3) * (y2 - y1) == 0)
			cout << "Отрезки пересекаются";
		else cout << "Отрезки не пересекаются";
	}
	else {
		numerator_a = (x4 - x2) * (y4 - y3) - (x4 - x3) * (y4 - y2);
		numerator_b = (x1 - x2) * (y4 - y2) - (x4 - x2) * (y1 - y2);
		Ua = numerator_a / denominator;
		Ub = numerator_b / denominator;
		cout << (Ua >= 0 && Ua <= 1 && Ub >= 0 && Ub <= 1 ? "Отрезки пересекаются" : "Отрезки не пересекаются");
	}
	return 0;
}*/