#include <iostream>
#include <cmath>

using namespace std;

int main12()
{
	int sequence_len = 0;
	cout << "Enter len of the sequence: ";
	cin >> sequence_len;

	int num_prev = 0;
	int num_curr = 0;
	double prevQ = 0;
	double currQ = 0;
	int len_max = 1;
	int len_curr = 1;
	cin >> num_prev;
	cin >> num_curr;

	for (int i = 2; i < sequence_len; i++)
	{
		prevQ = (double)num_curr / (double)num_prev;

		num_prev = num_curr;
		cin >> num_curr;

		currQ = (double)num_curr / (double)num_prev;;

		if (currQ == prevQ) 
		{
			len_curr++;
		}
		else
		{
			len_curr = 1;
		}
		 
		if (len_curr > len_max)
			len_max = len_curr;		
	}

	cout << endl << "MAX: " << len_max + 1<< endl;
	return 0;
}