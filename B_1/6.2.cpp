#include <stdio.h>
#include <iostream>

using namespace std;



union table
{
	struct 
	{
		unsigned int train : 10;
		unsigned int train_let : 8;
		unsigned int carriage : 6;
		unsigned int sitting : 6;
	} fields;

	unsigned int value;
};


int main28()
{
	union table ticket = {123, 'b', 10, 2};

	ticket.fields.train = 123;
	ticket.fields.carriage = 15;
	ticket.fields.sitting = 2;
		 
	cout << endl << ticket.fields.train << endl;
	cout << ticket.value;
	return 0;
}