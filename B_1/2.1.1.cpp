#include <cmath>
#include <cstdint>
#include <iostream>

#include "Functions.h"

using namespace std;


int main7()
{
	int number = 0;
	int pos = 0;

	cout << "Enter the number: ";
	cin >> number;

	int num_len = len(number);

	int duplicate = 1;
	for (int i = 1; i <= num_len; i++) 
	{
		int current_dig = dig_num(number, i);
		for (int k = i; k <= num_len; k++) 
		{
			if (current_dig == dig_num(number, k)) { duplicate++; }
		}
	}

	if (duplicate - num_len == 2) {
		cout << endl <<"It is True, there are 2 duplicated digits !" << endl;
	}
	else { cout << endl << "False, there are more or less the 2 dulicated digits!" << endl; return 1; }

	return 0;
}
