#include <iostream>
#include <cmath>
#include <time.h>


using namespace std;

int n = 1000;

int len(int num);


int count_zero(int* arr) {
	int zero = 0;

	for (int i = 1; i < n && arr[i] == 0; i++, zero++);


	return zero;
}

int* optimize(int* arr)
{
<<<<<<< HEAD
	for (int i = count_zero(arr); i < n; i++)
=======
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
>>>>>>> d24ad2d3e6055430500338caf54551e6c809cacd
	{
		if (arr[i] > 9999)
		{
			int x = arr[i] / 10000;
			arr[i + 1] += x;
			arr[i] -= x * 10000;
		}
	}

	int zeros = count_zero(arr);

	for (int i = 1; i < n - zeros; i++)
	{
		arr[i] = arr[i + zeros];
	}

	arr[0] += zeros;

	return arr;
}

int main18()
{

<<<<<<< HEAD
	int number = 0;
	cout << "Enter some number: ";
	cin >> number;

	int* arr = new int[n] {};

	arr[0] = 0;
=======
	int* arrayA = new int[x];
	
	arrayA[0] = 0;
	arrayA[1] = 1;

	for (int i = 2; i < x; i++)
		arrayA[i] = 0;
>>>>>>> d24ad2d3e6055430500338caf54551e6c809cacd

	arr[1] = 1;

	for (int i = 1; i <= number; i++)
	{
<<<<<<< HEAD
		for (int j = 1; j <= number; j++)
		{
			arr[j] *= i;
		}
=======
		for (int j = 1; j < x; j++)
			arrayA[j] *= i;
>>>>>>> d24ad2d3e6055430500338caf54551e6c809cacd

		arr = optimize(arr);
	}
<<<<<<< HEAD

	int end = 0;
	for (int i = n - 1; i > 0; i--)
	{
		if (!arr[i])
		{
			end++;
		}
		else
		{
			break;
		}
	}
	int ten = 0;
	cout << arr[n - end - 1] << endl;
	for (int i = n - end - 2; i > 0; i--)
	{
		switch (len(arr[i]))
		{
		case 4: break;
		case 3: cout << "0"; break;
		case 2: cout << "00"; break;
		case 1: cout << "00"; break;
		}

		cout << arr[i] << " ";
		ten++;
		if (ten == 9)
		{
			ten = 0;
			cout << endl;
		}
	}
	cout << "e" << arr[0];

=======
	cout << "\n\n\n";
	for (int i = 0; i < x; i++)
		cout << arrayA[i] << endl;

	delete[] arrayA;
	
>>>>>>> d24ad2d3e6055430500338caf54551e6c809cacd
	return 0;
}