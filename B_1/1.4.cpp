#include <iostream>
#include <cmath>

using namespace std;


int main4()
{
	cout << "Enter the position of Queen (x y): ";
	int Qx, Qy = 0;

	cin >> Qx >> Qy;

	cout << "Enter the position of Pawn (x y): ";
	int Px, Py = 0;

	cin >> Px >> Py;
	cout << "\n";

	if (1 > Qx && Qx < 9 || 
		1 > Qy && Qy < 9 ||
		1 > Px && Px < 9 ||
		1 > Py && Py < 9 )
	{ cout << "Invalid parametr value"; return 1; }

	if (Qx == Px ||
		Qy == Py ||
		abs(Qx - Px) == abs(Qy - Py))
	{
		cout << "Queen beats the Paw!\n"; 
		if (abs(Qx - Px) == abs(Qy - Py)) {
			cout << "Paw beats the Queen too!\n";
			return 0;
		}
	}
	else
	{
		cout << "Queen anyway can beat any square in 2 steps!\n";
		if (abs(Qx - Px) == 1 && abs(Qy - Py) == 2) 
		{
			cout << "Beat Paw the Queen or not depends on Paw's direction\n";
		}

	}

	
	return 0;
}