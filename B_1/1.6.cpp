#include <iostream>
#include <cmath>
#include <iomanip>
#include <bitset>

using namespace std;

int main6()
{
	int N, bit_pos = 0;


	cout << "Enter N parametr value: ";
	cin >> N;

	cout << "Enter bit position: ";
	cin >> bit_pos;

	if (bit_pos > 32) {
		cout << "Int has only 4 bytes or 32 bits!"; return 1;
	}

	int bit_pos_value = N & 1 << bit_pos;

	cout << endl
		 << "DEC " << setw(16) << N << endl
		 << "BIN " << setw(16) << bitset<16>(N) << endl
		 << "POS " << setw(16 - bit_pos) << bit_pos_value / pow(2, bit_pos) << endl;


	cout << endl <<  "Enter bit positions to invert (x y): ";

	int invert1, invert2 = 0;
	cin >> invert1 >> invert2;

	int invertedN = N ^ 1 << invert1 | 1 << invert2;

	if (invert2 > invert1) { swap(invert1, invert2); }

	cout << endl << "INV " << setw(16) << bitset<16>(invertedN) << endl;
	cout << setw(20 - invert1) << "^" << setw(invert1 - invert2) << "^";
	

	return 0;

}