#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;



union table
{
	struct 
	{
		unsigned int sitting : 6;
		unsigned int carriage : 6;
		unsigned int train_let : 8;
		unsigned int train : 10;
	} fields;

	unsigned int value;
};

static_assert(sizeof(table) == sizeof(unsigned int));

table* generate_tickets(int n) {

	table* tickets = new table[n];

	for (int i = 0; i < n; i++)
	{
		tickets[i].fields.train = rand() % 1000 + 1;
		tickets[i].fields.train_let = char(rand() % ('z'-'a'+1) + 'a');
		tickets[i].fields.carriage = rand() % 32 + 1;
		tickets[i].fields.sitting = rand() % 54 + 1;
	}

	return tickets;
}

void print_tickets(table* tickets, int len)
{
	cout << setw(7) << "Train" << setw(10) << "Carriage" << setw(9) << "Sitting" << setw(9) << "Value" << endl << endl;

	for(int i = 0; i < len; i++)
	{
		cout << setw(5) << tickets[i].fields.train
			 << setw(2) << (char)tickets[i].fields.train_let
			 << setw(7) << tickets[i].fields.carriage 
			 << setw(9) << tickets[i].fields.sitting 
			 << setw(15) << tickets[i].value 
			 <<endl;
	}
}

int main28()
{
	srand(time(nullptr));

	int n = 0;
	cout << "Enter number of tickets: ";
	cin >> n;

	auto* tickets = generate_tickets(n);

	print_tickets(tickets, n);

	cout << "\n\n";

	std::sort(&tickets[0], &tickets[n - 1], [](const table& a, const table& b) {return a.value < b.value; });

	print_tickets(tickets, n);

	return 0;
}