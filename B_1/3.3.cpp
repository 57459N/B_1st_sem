#include <iostream>
#include <cmath>

int sum_of_digits(int num);

using namespace std;

int main17()
{
	int limit = 1000000;
	limit++;

	bool* primeArr = new bool[limit];

	for (int i = 0; i < limit; primeArr[i] = 1, i++);

	for (int i = 2; i < limit; i++)
	{
		if (primeArr[i])
		{
			int max = limit / i;
			for (int j = 2; j < max + 1; primeArr[i * j] = 0, j++);
		}
	}

	int primeCount = 0;
	cout << "Enter count of numbers: ";
	cin >> primeCount;

	int maxDigSum = 0;
	cout << "Enter limit of sum of digits: ";
	cin >> maxDigSum;

	int i = 2;
	int done = 0;

	while (done != primeCount)
	{
		if (primeArr[i] && sum_of_digits(i) < maxDigSum)
		{
				cout << endl << i++;
				done++;
		}
	}
	
	return 0;
}