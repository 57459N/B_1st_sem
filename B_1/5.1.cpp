#include <iostream>

using namespace std;

uint64_t fact_stash[] = { 1, 1 }; // num, num!

int COUNTER = 0;

int fact(int num) // works if num <= 12
{
	int saved_fact = fact_stash[1];

	if (fact_stash[0] < num)
		for (int i = fact_stash[0] + 1; i <= num; i++)
			saved_fact *= i;
	else
		for (int i = fact_stash[0]; i > num; i--)
			saved_fact /= i;

	fact_stash[0] = num;
	fact_stash[1] = saved_fact;
	return saved_fact;
}

int minusOne(int power)
{
	return (power % 2 ? -1 : 1);
}

int powTwo(int power)
{
	return (1 << power);
}

double Xpow_stash[] = { 1, 1 }; // X in power, power

double Xpow(double x, int power)
{
	double saved_x = Xpow_stash[0];
	double saved_power = Xpow_stash[1];

	if (saved_power < power)
		for (int i = saved_power; i <= power; i++)
			saved_x *= x;

	Xpow_stash[0] = power;
	Xpow_stash[1] = saved_x;
	return saved_x;

}

int main23()
{
	/*
	double x = 0;
	cout << "Enter 0 < X <= 1: ";
	cin >> x;
	*/
	for (double i = 0.1; i <= 1; i += 0.1)
	{
		Xpow_stash[0] = i;

		const int E = 1e-6;

		double slog = 0;
		int k = 1;

		double result = 0;
		do
		{
			slog = Xpow(i, 2 * k) * minusOne(k) / powTwo(k) / fact(k);
			result += slog;
			k++;

		} while (abs(slog) > E);
		cout << i << " : " << result << endl;
	}
	
	return 0;
}

/*::Xpow_stash[0] = x;

	const int E = 1e-6;

	double slog = 0;
	int k = 1;

	double result = 0;
	do 
	{
		slog = Xpow(x, 2 * k) * minusOne(k) / powTwo(k) / fact(k);
		result += slog;
		k++;

	} while (abs(slog) > E);*/