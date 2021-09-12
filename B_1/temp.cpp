#include <iostream>
#include <cmath>

using namespace std;

int temp()
	// added this line to test add commit and push to git
	// added this line to test from another computer

{
	const double e = 2.7182818279;
	double x = 0;
	int s, t, eq_num = 0;

	cout << "Please enter the number of equasion (1-12): ";
	cin >> eq_num;

	double y = 0;

	cout << "Please enter parametrs s, t - int, x - double: \n" << endl;

	cout << "S: ";
	cin >> s;

	cout << "T: ";
	cin >> t;

	cout << "X: ";
	cin >> x;

	switch (eq_num) 
	{
		case 1:

			if (x + s <= 0 || x < 0 || x + s == 1 || t == 0) {
				cout << "\n Invalid parametr value \n";
				return 1;
			}
			y = (tan(x * x) + sqrt(x)) / (t * log10(x + s));
			break;

		case 2:

			if (s*x < 0 || t < 0 || x*x*x < 1) {
				cout << "\n Invalid parametr value \n";
				return 1;
			}
			y = (1 + sqrt(s * x)) / pow((1 + x * x * x), 1.0 / t);
			break;

		case 3: 

			if (x + s*log10(pow(x,t)) == 0 || pow(x, t) <= 0) {
				cout << "\n Invalid parametr value \n";
				return 1;
			}
				
				y = (pow(e, 0.5 * x)) / (sqrt(x + s * log10(pow(x, t))));
			break;
			
		case 4: 
			if (x*x + s * sin(log10(x))) {
				cout << "\n Invalid parametr value \n";
				return 1;
			}

	}
	
	cout << "\nResult: "<< y << endl;
}