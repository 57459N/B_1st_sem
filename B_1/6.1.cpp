using namespace std;
#include <iostream>
#include <iomanip>
#include "Functions.h"

struct student 
{
	string name;
	string surname;
	string patronymic;
	string sex;

	unsigned short age;
	unsigned short grade;
	unsigned short average_score;
		
};

int excellent_students_amount(student* arr, int len)
{
	int count = 0;
	for (int i = 0; i < len; i++)
		if (arr[i].average_score >= 9)
			count++;
	return count;
}

void print_base(student* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << setw(15) << arr[i].surname << setw(10) << arr[i].name << setw(15) << arr[i].patronymic << setw(7) << arr[i].sex << setw(5) << arr[i].age << setw(5) << arr[i].grade << setw(5) << arr[i].average_score << endl;
	}
}


int main27()
{
	setlocale(LC_ALL, "Russian");
	srand(time(nullptr));

	int len = 100;

	string* mNames = new string[len];
	string* mSurnames = new string[len];
	string* mPatronymics = new string[len];

	string* fNames = new string[len];
	string* fSurnames = new string[len];
	string* fPatronymics = new string[len];

	student* students = new student[len];

	load(mNames, mSurnames, mPatronymics, "male");
	load(fNames, fSurnames, fPatronymics, "female");

	for (int i = 0; i < len; i++)
	{
		if (rand() % 2)
		{
			students[i].name = mNames[rand() % 100];
			students[i].surname = mSurnames[rand() % 100];
			students[i].patronymic = mPatronymics[rand() % 100];
			students[i].sex = "male";
		}
		else
		{
			students[i].name = fNames[rand() % 100];
			students[i].surname = fSurnames[rand() % 100];
			students[i].patronymic = fPatronymics[rand() % 100];
			students[i].sex = "female";
		}

		students[i].age = rand() % 10 + 17;
		students[i].grade = rand() % 4 + 1;
		students[i].average_score = rand() % 100 / 10;
	}

	int exc_students = excellent_students_amount(students, len);

	print_base(students, len);

	cout << "There are " << exc_students << " excellent students!" << endl;

	return 0;
}
