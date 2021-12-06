#include <cmath>
#include <cstdint>
#include <iostream>
#include <cstring>
#include <string>
#include <fstream>

#include "Functions.h"

using namespace std;

int dig_num(uint64_t num, int pos)
{
	return uint64_t(num / uint64_t(pow(10, pos - 1))) % 10;
}


int len(int num)
{
	int len = 0;

	while (num)
	{
		num /= 10;
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

unsigned long long factorial(unsigned long long num) 
{
	if (num == 1)
	{
		return 1;
	}
	else 
	{
		return num * factorial(num - 1);	
	}
}

void loadNames(string** males, string** females)
{
	setlocale(LC_ALL, "Russian");
	string line;
	ifstream M("D:\\Docs\\cpp\\git\\B_1st_sem\\male_names.txt");

	if (M.is_open())
	{	
		int i = 0;
		while (getline(M, line))
		{
			*males[i] = line;
			i++;
		}

	}
	M.close();
}
