#include <iostream>

using namespace std;

int main20()
{

	const int LEN = 100;
	char string[LEN];
	
	cin.getline(string, LEN);

	int start_pos = 0;
	int seq_len = 1;
	int dupl = 1;
	char curr, prev = '\0';
	
	for (int i = 0; i <= strlen(string); i++)
	{
		curr = string[i];
		if (curr == prev)
			dupl++;
		else
		{
			if (dupl > seq_len)
			{
				seq_len = dupl;
				start_pos = i - dupl;
			}
			dupl = 1;
		}
		prev = curr;
	}

	if (strlen(string) == start_pos + seq_len)
		string[start_pos] = '\0';
	else
	{	
		int i = start_pos + seq_len;
		int j = i;
		for (j; j < strlen(string); j++)
		{
			string[j-seq_len] = string[j];
		}
		string[start_pos + (j - i)] = '\0';
	}

	cout << string;
	return 0;
}