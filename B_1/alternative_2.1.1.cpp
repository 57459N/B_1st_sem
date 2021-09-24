#include <iostream>
#include <cmath>

using namespace std;

int dig_num(long long num, int pos);
int len(int num);


int main1337()
{
	long long x = 0;
	int k = 0;
	cin >> x >> k;

	for (int i = 1; i <= len(x); i++)
	{
		int curr_digit = dig_num(x, i);
		int curr_repeat = 0;
		for (int j = i; j <= len(x); j++)
		{
			if (curr_digit == dig_num(x, j))
				curr_repeat++;
		}
		if (curr_repeat == 2){ cout << curr_digit; break; }
		curr_repeat = 0;
	}

	return 0;

}