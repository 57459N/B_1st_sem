#include <iostream>
#include <string.h>

using namespace std;



int temp()
	
{
	const int LEN = 1000;
	char startString[LEN];

	cin.getline(startString, LEN);

	char addString[LEN];

	cin.getline(addString, LEN);

	strcat_s(startString, LEN, addString);
	cout << startString;

	return 0;
}
