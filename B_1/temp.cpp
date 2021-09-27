#include <iostream>
#include <cmath>

using namespace std;

int temp()
	
{
	int n = 0;
	cin >> n;
	int k = 0;
	cin >> k;

	int len = 1;
	while (n / pow(10,len) >= 1)
		len++;

	int dupl= 0;
	for (int i = 0; i < len; i++)
	{
		int curr = n / (int)pow(10, i) % 10;
		dupl = 0;
		for (int j = i; j < len; j++)
		{
			int curr_inner = n / (int)pow(10, j) % 10;

			if (curr_inner == curr)
				dupl++;
}
		if (dupl > k)
		{
			cout << "Yes more then K simmilar digits in number";
			break;
		}
	}
	if (dupl <= k)
		cout << "No, there are not more then K simmilar digits!";
	return 0;

}
