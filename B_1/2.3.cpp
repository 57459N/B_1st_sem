#include <iostream>
#include <cmath>

bool isPrime(int num);
int sum_of_digits(int num);

using namespace std;



int main10()
{
	int prime_count, sum = 0;

	cout << "Enter the count of prime numbers: ";
	cin >> prime_count;

	cout << "Sum of digits in them should be less then: ";
	cin >> sum;

	int number = 2;
	int done = 0;
	while (true)
	{
		if (isPrime(number)) 
		{
			if (sum_of_digits(number) < sum)
			{
				cout << endl << number;
				done++;
			}
		}
		number++;

		if (done == prime_count) { break; }
	}

	return 0;
}