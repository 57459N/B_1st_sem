#include <iostream>
#include <cmath>

int len(int num);

int dig_num(int num, int pos);

using namespace std;


int main13()
{
	int k = 0;
	cout << "Enter position of digit: ";
	cin >> k;

	int sum_of_len = 0;
	int count = 0;
	while (sum_of_len < k)
	{
		count++;
		sum_of_len += len(pow(count, 3));
	}
	int digit = dig_num(pow(count, 3), sum_of_len - k + 1);

	cout << digit;
	return 0;
}