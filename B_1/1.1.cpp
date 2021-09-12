#include <iostream>
#include <cmath>

using namespace std;

int main1()
{
	double x = 0;
	int s, t = 0;
	
	cout << "Please enter parametrs s, t - int, x - double: " << endl;
	
	cout << "S: ";
	cin >> s;

	cout << "T: ";
	cin >> t;

	cout << "X: ";
	cin >> x;

	if (x < 0 || x + s == 1 || t == 0) {
		cout << "\n Invalid parametr value \n";
		return 1;
	}

	double y = (tan(x * x) + sqrt(x)) / (t * log10(x+s));

	cout << "\nResult: " << y << endl;
}