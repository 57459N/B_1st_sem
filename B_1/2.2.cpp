#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int six(double num)
{
	return long long(num * 10000000000) % 100 != 0;		
}

int odd_faq_multy(int count)
{
	if (count < 1) return 1;

	int x = 1;
	for (int i = 1; i <= count; i++)
	{
		x *= 2 * i - 1;
	}
	return x;
}

int even_faq_multy(int count)
{
	if (count < 1) return 1;

	int x = 1;
	for (int i = 1; i <= count; i++)
	{
		x *= 2 * i;
	}
	return x;
}

double my_Taylor(double num)
{
	double y = 1;
	int count = 0;
	int out = 0;
	while (true)
	{
		count++;
		double plus = pow(-1, count - 1) * odd_faq_multy(count - 1) / even_faq_multy(count) * pow(num, count);
		y += plus;

		if (out == 1) break;
		if (six(y)) out = 1;
	}
	
	cout << endl << num << " - " << setprecision(7) << y << " - " << count << endl;
	return 0;
}
int main9()
{
		
	for (double i = -0.5; i <= 0.5; i += 0.1)
	{
		my_Taylor(i);
	}
	return 0;
}

// GG мой космический корабль врежется в Луну(