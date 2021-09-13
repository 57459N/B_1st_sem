#include <iostream>
#include <cmath>

int sum_of_digits(int num);

using namespace std;



int main8()
{
	double number = 0;
	cout << "Enter the number: ";
	cin >> number;

	int k = 0;
	cout << "Enter number of digits after a dot: ";
	cin >> k;
	
	int grade_after_dot = pow(10, k);
	int after_dot = int(number * grade_after_dot) % grade_after_dot;

	int befor_dot = number;
	
	if (sum_of_digits(befor_dot) == sum_of_digits(after_dot))
	{
		cout << endl <<"Sum befor dot equals sum after dot!" << endl;
	}
	else 
	{
		cout << endl << "Sums are not equal!" << endl;
		return 1;
	}

	return 0;
}