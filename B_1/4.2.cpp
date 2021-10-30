#include <iostream>
#include <bitset>
#include <string.h>
#include <iomanip>
#include "Functions.h"

using namespace std;


int main21()
{
	int n = 0;

	cout << "Enter top limit: ";
	cin >> n;
	
	for (int j = 0; j < n + 1; j++)
	{
		if (isPrime(j))
		{
			const int LEN = 1000;

			char binStr[LEN] = "";
			char buff[LEN] = "";

			bool flag = 0;
			for (int i = 31; i > -1; i--)
			{
				int curr = j >> i & 1;
				if (curr) flag = 1;

				if (flag)
				{
					_itoa_s(curr, buff, LEN, 10);
					strcat_s(binStr, LEN, buff);
				}
			}

			char nonRev[LEN] = "";
			strcpy_s(nonRev, LEN, binStr);
			_strrev(binStr);
			 
			if (!strcmp(nonRev, binStr))
				cout << setw(len(n)) << j << " - " << setw(32) << nonRev << endl;
		}
	}

	return 0;
}