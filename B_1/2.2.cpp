#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


double my_Taylor(double num, int& i)
{
	double y_prev = 0;
	double y = 1;
	int minus = -1;
	int multy = 1;
	int devin = 1;
	double x = 1;
	i = 1;
	while (abs(y-y_prev) > 1e-6)
	{
		multy *= 2 * i - 1;
		devin *= 2 * i;
		minus *= -1;
		x *= num;
		double plus = minus * multy * x / devin;
		y_prev = y;
		y += plus;
		i++;
	}
	
	return y;
}   



int main9()
{
		
	for (double i = -0.5; i <= 0.5; i += 0.1)
	{
		int it = 0;
		cout << my_Taylor(i, it) << ":" << it << endl;
	}
	return 0;
}

// GG мой космический корабль врежется в Луну(