#include <iostream>
#include <string.h>

using namespace std;

bool isOnlyOne(int* arr)
{
	for (int i=0; i < 256; i++)
		if (arr[i] > 1)
			return 0;
	return 1;
}


int main22()
{
	const int LEN = 1000;
	const char separators[] = " .,;:!?-()";
	int arr[256]{};

	char str[LEN];
	cout << "Enter some string: ";
	cin.getline(str, LEN);

	char* ctx = nullptr;
	char finalStr[LEN] = "";

	char* word = strtok_s(str, separators, &ctx);

	while (word != nullptr)
	{
		for (int i = 0; i < strlen(word); i++)
			arr[word[i]] += 1;
		
		if (isOnlyOne(arr))
		{
			strcat_s(finalStr, LEN, word);
			strcat_s(finalStr, LEN, " ");
		}
		
		for (int i = 0; i < 256; i++)
			arr[i] = 0;

		word = strtok_s(nullptr, separators, &ctx);
	}

	cout << finalStr;

	return 0;
}