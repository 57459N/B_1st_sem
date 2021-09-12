#include <iostream>
#include <cmath>

int dig_num(int num, int pos);

using namespace std;



int main7()
{
	int number = 0;
	int pos = 0;

	cout << "Enter the number: ";
	cin >> number;

	int len = 0;
	
	while (true)
	{
		int x = pow(10, len);
		if (number % x == number) { break; }
		len++;
	}

	cout << "Number len is "<<len << endl;


	int duplicate = 0;

	for (int i = 1; i <= len; i++) 
	{
		int current_dig = dig_num(number, i);
		for (int k = 1; k <= len; k++) 
		{
			if (current_dig == dig_num(number, k)) { duplicate++; }
		}
	}

	if (duplicate - len == 2) {
		cout << "It is True, there are 2 duplicated digits !";
	}
	else { cout << "False, there are more or less the 2 dulicated digits!"; return 1; }

	return 0;
}

