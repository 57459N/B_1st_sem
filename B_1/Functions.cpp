#include <cmath>

using namespace std;

int dig_num(int num, int pos)
{
	int p = pow(10, pos);
	int pp = pow(10, pos - 1);

	int x = (num % p - num % pp) / pp;

	return x;

}


int len(int num)
{
	int len = 0;

	while (true)
	{
		int x = pow(10, len);
		if (num % x == num) { break; }
		len++;
	}
	return len;
}

bool isPrime(int num)
{
	for (int i = 2, end = sqrt(num); i <= end; i++)
	{
		if (num % i == 0)
			return false;
	}		
	return num > 1;
}

int sum_of_digits(int num)
{
	int sum = 0;

	for (int i = 1; i <= len(num); i++)
	{
		sum += dig_num(num, i);
	}

	return sum;
}
