using namespace std;

#include "Functions.h"

struct student 
{
	char name[256];
	char surname[256];
	char patronymic[256];
	char sex;

	unsigned short age;
	unsigned short grade;
	unsigned short average_score;
		
};

int main27()
{
	setlocale(LC_ALL, "Russian");

	string* mNames = nullptr;
	string* fNames = nullptr;

	load61(&mNames, &fNames);


	for (int i = 0; i < 100; i++)
	{
		cout << mNames[i] << " " << fNames[i] << endl;
	}

	return 0;
}
