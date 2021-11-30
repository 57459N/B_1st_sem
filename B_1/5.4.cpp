#include <iostream>
#include <string.h>

using namespace std;

void del(char* str, int start, int len)
{
	char ch = ' ';
	do
	{
		ch = str[start + len];
		str[start++] = ch;
	} while (ch != '\0');
}



int main26()
{
	const int STRLEN = 1000;
	char str[STRLEN];

	cout << "Enter your string: ";
	cin.getline(str, STRLEN);

	int count = 0;
	for (int i = strlen(str) - 1; i > -1; i--)
	{
		if (str[i] == ' ')
			count++;
		else
		{
			if (count > 1)
				del(str, i + 2, count - 1);
			count = 0;
		}
	}
	/*if (count)
		del(str, 0, count)				Удаление пробелов пере строкой
	*/

	cout << str;

	return 0;
}
