#include <iostream>
#include <cmath>
#include <time.h>


using namespace std;


int main15()
{
	int n = 10;
	cout << "Enter the length of array: ";
	cin >> n;
	getchar();
	srand(time(NULL));

	int* arrayA = new int[n];

	int choice = 0;
	cout << endl << "0 - random generated array(default)"
		<< endl << "1 - manual values enter"
		<< endl;

	
	choice = getchar();
	cout << endl << choice << endl;
	//if ((int)choice 
	if((int)choice == 48 || (int)choice == 10)
	{
		cout << "A : ";
		for (int i = 0; i < n; i++)
		{
			arrayA[i] = rand() % 10000;
			cout << arrayA[i] << " ";
		}
	}
	else{
		for (int i = 0; i < n; i++)
			cin >> arrayA[i];
		cout << "A : ";
		for (int i = 0; i < n; i++)
			cout << arrayA[i] << " ";
		
	}
	int* arrayB = new int[n];
	cout << endl << "B : ";
	for (int i = 0; i < n; i++)
	{
		int more = 0;
		for (int j = 0; j < i; j++)
		{
			if (arrayA[j] > arrayA[i])
				more++;
		}
		arrayB[i] = more;
		cout << arrayB[i] << " ";

	}


	return 0;
}