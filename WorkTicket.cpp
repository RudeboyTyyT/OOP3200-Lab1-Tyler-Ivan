#include "WorkTicket.h"
#include <iostream>

WorkTicket::WorkTicket(const int ticket_number, const int day, const int month, const int year, const std::string& id, const std::string& desc)
{
	
	SetTicketNumber(ticket_number);
	SetDay(day);
	SetMonth(month);
	SetYear(year);
	SetId(id);
	SetDesc(desc);
}


int WorkTicket::GetTicketNumber() const
{
	return m_ticket_number;
}

int WorkTicket::GetDay() const
{
	return m_day;
}

int WorkTicket::GetMonth() const
{
	return m_month;
}

int WorkTicket::GetYear() const
{
	return m_year;
}

std::string WorkTicket::GetId() const
{
	return m_id;
}

std::string WorkTicket::GetDesc() const
{
	return m_desc;
}

void WorkTicket::SetTicketNumber(int ticket_number = 0)
{
	m_ticket_number = ticket_number;
}

void WorkTicket::SetDay(int day = 1)
{
	m_day = day;
}

void WorkTicket::SetMonth(int month = 2)
{
	m_month = month;
}

void WorkTicket::SetYear(int year = 2001)
{
	m_year = year;
}

void WorkTicket::SetId(const std::string& id = "")
{
	m_id = id;
}

void WorkTicket::SetDesc(const std::string& desc = "")
{
	m_desc = desc;
}

bool WorkTicket::SetWorkTicket(int ticket_number, int day, int month, int year, std::string id, std::string desc)
{
	SetTicketNumber(ticket_number);
	SetDay(day);
	SetMonth(month);
	SetYear(year);
	SetId(id);
	SetDesc(desc);
	return true;
}

void WorkTicket::ShowWorkTicket() 
{

}

