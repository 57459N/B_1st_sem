#include <iostream>
#include <cmath>
#include <time.h>
#include <iomanip>

unsigned long long factorial(unsigned long long num);


int x = 1000;


int* sort(int* arr)
{
	int n = 1;
	while (arr[n] == 0)
		n++;
	if (n - 1 > 0)
	for (int i = n+1; i < x; i++)  // 0  0 0 0 12 n = 3
	{
		arr[i - n] = arr[i];
	}
	arr[0] = n - 1;

	for (int i = 1; i < x-1; i++)
	{
		if (arr[i] > 9999)
		{
			arr[i + 1] += int(arr[i] / 10000);
			arr[i] = arr[i] % 10000;
		}
	}
	return arr;
}

using namespace std;


int main18()
{
	unsigned long long  num = 0;
	cout << "Enter numer N to count numbers of different digits in its factorial: ";
	cin >> num;

	int* arrayA = new int[x];
	
	arrayA[0] = 0;
	arrayA[1] = 1;

	for (int i = 2; i < x; i++)
		arrayA[i] = 0;

	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j < x; j++)
			arrayA[j] *= i;

		arrayA = sort(arrayA);
	}
	cout << "\n\n\n";
	for (int i = 0; i < x; i++)
		cout << arrayA[i] << endl;

	delete[] arrayA;
	
	return 0;
}