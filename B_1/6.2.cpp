#include <stdio.h>
#include <iostream>

using namespace std;

struct ticket
{
	unsigned int train : 10;
	unsigned int train_let : 8;
	unsigned int carriage : 6;
	unsigned int sitting : 6;
};

union table
{
	struct ticket ticket;
	
	struct
	{
		unsigned a00 : 1;
		unsigned a01 : 1;
		unsigned a02 : 1;
		unsigned a03 : 1;
		unsigned a04 : 1;
		unsigned a05 : 1;
		unsigned a06 : 1;
		unsigned a07 : 1;
		unsigned a08 : 1;
		unsigned a09 : 1;
		unsigned a10 : 1;
		unsigned a11 : 1;
		unsigned a12 : 1;
		unsigned a13 : 1;
		unsigned a14 : 1;
		unsigned a15 : 1;
		unsigned a16 : 1;
		unsigned a17 : 1;
		unsigned a18 : 1;
		unsigned a19 : 1;
		unsigned a20 : 1;
		unsigned a21 : 1;
		unsigned a22 : 1;
		unsigned a23 : 1;
		unsigned a24 : 1;
		unsigned a25 : 1;
		unsigned a26 : 1;
		unsigned a27 : 1;
		unsigned a28 : 1;
		unsigned a29 : 1;
		} mesh;

	
	

};


int main28()
{
	union table ticket = {123, 'b', 10, 2};

	ticket.ticket.train = 123;
	ticket.ticket.carriage = 15;
	ticket.ticket.sitting = 2;
		 
	cout << endl << ticket.ticket.train;
	return 0;
}