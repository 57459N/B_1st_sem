#include <iostream>
#include <iomanip>
#include <string.h>

using namespace std;

void arrRand(int** arr, int res, int min, int max)
{
	srand(time(NULL));
	for (int i = 0; i < res; i++)
	{
		arr[i] = new int[res];
		for (int j = 0; j < res; j++)
			arr[i][j] = rand() % max + min;
	}
}

void arrManual(int** arr, int res)
{
	for (int i = 0; i < res; i++)
	{
		arr[i] = new int[res];
		for (int j = 0; j < res; j++)
		{
			cout << endl << i << "." << j << " : ";
			cin >> arr[i][j];
		}
	}
}

void printA(int** arr, int res, int maxElLen)
{
	cout << endl;
	for (int i = 0; i < res; i++)
	{ 
		for (int j = 0; j < res; j++)
			cout << setw(maxElLen) << arr[i][j] << " ";
		cout << endl << endl;
	}
}

void sumSort(int** arr, int res)
{
	int* preArr = new int[res];
	for (int i = 0; i < res; i++)
	{
		preArr[i] = 0;
		for (int j = 0; j < res; j++)
			preArr[i] += arr[i][j];
	}

	for (int i = 0; i < res; i++)
	{
		int min = i;
		for (int j = i; j < res; j++)
			
			if (preArr[j] < preArr[min])
				min = j;

		if (i != min)
			swap(arr[i], arr[min]);
	}
	
	
}


int main25()
{
	int res = 0;
	cout << "Enter array resolution: ";
	cin >> res;

	int choice = 0;
	cout << "Fill array (0 - random, 1 - manual):";
	cin >> choice;

	int** arr = new int*[res];
	int max = 0;
	int min = 0;

	switch (choice) 
	{
	case 0: 
		cout << "Enter minimum and maximum values: ";
		cin >> min >> max;
		
		arrRand(arr, res, min, max);
		break;

	case 1:
		arrManual(arr, res);
		break;
	}
	cout << "\n\tFirts array:\n";
	printA(arr, res, 5);

	sumSort(arr, res);

	cout << "\n\tArray after sort:\n";
	printA(arr, res, 5);

	return 0;
}
