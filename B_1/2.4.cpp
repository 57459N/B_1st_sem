#include <iostream>
#include <cmath>

using namespace std;


int main11()
{
	double num = 0;
	cout << "Enter your number ( 0 < x <= 1 ): ";
	cin >> num;

	if (num <= 0 || num > 1)
	{
		cout << "Invalid parametr value!";
		return 1;
	}
	double y = 0;
	double y_prev = 0.1;
	int count = 0;

	int minus = 1;
	double num_pow = 1;
	int two_pow = 1;
	int fact = 1;

	
	while (abs(y - y_prev) > 1e-6)
	{
		count++;
		minus *= -1;
		num_pow *= num * num;
		two_pow *= 2;
		fact *= count;

		y_prev = y;
		y += minus * num_pow / two_pow / fact ;
	}

	cout << "Your sigma sum : " << y;
	return 0;
}