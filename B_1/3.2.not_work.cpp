#include <iostream>
#include <cmath>
#include <time.h>
#include <iomanip>


using namespace std;


int main666()
{
	int n = 10;
	cout << "Enter the resolution of matrix: ";
	cin >> n;

	srand(time(NULL));

	int** arrayA = new int* [n];

	for (int i = 0; i < n; i++)
		arrayA[i] = new int[n];

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
	
	return 0;
}