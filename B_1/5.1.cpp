#include <iostream>
#include <iomanip>

using namespace std;

double calculate_ret(double x, double E)
{
	double minus = 1;
	double powx = 1;
	double pow2 = 1;
	double fact = 1;

	double plus = 0;
	double sum = 0;
	int k = 0;

	do
	{
		k++;
		minus *= -1;
		powx *= x * x;
		pow2 *= 2;
		fact *= k;

		plus = minus * powx / pow2 / fact;
		sum += plus;
		cout << setw(10) << k << " " << setw(10) << plus << " " << setw(10) << sum << endl;

	} while (abs(plus) > E);

	return sum;
}

void calculate_lnk(double x, double E, double &res)
{
	double minus = 1;
	double powx = 1;
	double pow2 = 1;
	double fact = 1;

	double plus = 0;
	double sum = 0;
	int k = 0;

	do
	{
		k++;
		minus *= -1;
		powx *= x * x;
		pow2 *= 2;
		fact *= k;

		plus = minus * powx / pow2 / fact;
		sum += plus;
		cout << setw(10) << k << " " << setw(10) << plus << " " << setw(10) << sum << endl;

	} while (abs(plus) > E);

	res = sum;
}

void calculate_ptr(double x, double E, double* res)
{
	double minus = 1;
	double powx = 1;
	double pow2 = 1;
	double fact = 1;

	double plus = 0;
	double sum = 0;
	int k = 0;

	do
	{
		k++;
		minus *= -1;
		powx *= x * x;
		pow2 *= 2;
		fact *= k;

		plus = minus * powx / pow2 / fact;
		sum += plus;
		cout << setw(10) << k << " " << setw(10) << plus << " " << setw(10) << sum << endl;

	} while (abs(plus) > E);

	*res = sum;
}

int main23()
{
	double E = 1e-6;

	double x = 0;
	cout << "Enter x (0 < x <=1): ";
	cin >> x;

	double sum = 0;

	calculate_lnk(x, E, sum);
	cout << sum;

	calculate_ptr(x, E, &sum);
	cout << sum;

	return 0;
}
}
