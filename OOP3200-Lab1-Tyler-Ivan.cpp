// OOP3200-Lab1-Tyler-Ivan.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "WorkTicket.h"

int main()
{
	

	int const MIN_DAY = 1;
	int const MAX_DAY = 30;
	int const MIN_MONTH = 1;
	int const MAX_MONTH = 12;
	int const MIN_YEAR = 2000;
	int const MAX_YEAR = 2099;
	int const TICKETS = 3;
	int ticket_number;
	int day;
	int month;
	int year;
	std::string id;
	std::string desc;


	WorkTicket workticket[TICKETS];
	for (int i = 0; i < TICKETS; i++)
	{
		workticket[i].SetWorkTicket(ticket_number, day, month, year, id, desc);
	}

	for (int i = 0; i < TICKETS; i++)
	{
		workticket[i].ShowWorkTicket();
	}
    
}
