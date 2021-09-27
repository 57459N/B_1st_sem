#include <iostream>
#include <cmath>
#include <time.h>
#include <iomanip>


using namespace std;


int main16()
{
	int n = 0;
	cout << "Enter the resolution of matrix: ";
	cin >> n;

	srand(time(NULL));

	int** arrayA = new int* [n];
	int** arrayB = new int* [n];

	for (int i = 0; i < n; i++) {
		arrayA[i] = new int[n];
		arrayB[i] = new int[n];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arrayA[i][j] = rand() % 100;
			cout << setw(4) << arrayA[i][j];
		}
		cout << endl;
	}

	cout << "\n\n\n";

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int max = 0;
			for (int k = i; k < n; k++)
			{
				for (int l = j; l < n; l++)
				{
					max = std::max(max, arrayA[k][l]);
				}
			}
			arrayB[i][j] = max;
			cout << setw(4) << arrayB[i][j];
		}
		cout << endl;
	}



	cout << "\n\n\n";
	
	return 0;
}