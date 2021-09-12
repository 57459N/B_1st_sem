#include <iostream>
#include <cmath>

int dig_num(int num, int pos);
int len(int num);

using namespace std;



int main8()
{
	double number = 0;
	cout << "Enter the number: ";
	cin >> number;

	int k = 0;
	cout << "Enter number of digits after a dot: ";
	cin >> k;
	
	int k_sum = 0;

	for (int i = 1; i<=k; i++)
	{
		k_sum += int(number * pow(10, i)) % 10;
	}

	
	int befor_dot_sum = 0;
	int inum = number;

	for (int i = 1; i <= len(inum); i++)
	{
		befor_dot_sum += dig_num(inum, i);
	}

	if (k_sum == befor_dot_sum)
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