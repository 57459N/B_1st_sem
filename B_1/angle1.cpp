#include <iostream>
#include <cmath>
#include <time.h>
#include <iomanip>


using namespace std;


int main777()
{
	int n = 0;
	int k = 0;
	cout << "Enter the resolution of matrix: ";
	cin >> n;
	cout << "Enter help diag 0,Y start: ";
	cin >> k;

	int** arrayA = new int* [n];


	for (int i = 0; i < n; i++)
	{
		arrayA[i] = new int[n];
		for (int j = 0; j < n; j++)
			arrayA[i][j] = 0;
	}


	for (int i = 0; i < n; i++)
	{
		int end = i + k + 1 >= n ? n : i + k + 1;

		for (int j = i; j < end; j++)
			arrayA[i][j] = 1;
	}
	cout << endl;


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
			cout << arrayA[i][j] << " ";
		cout << endl;
	}

	cout << "\n\n\n";

	system("pause");
	return 0;
}