#pragma once

#ifndef __WORKTICKET__
#define __WORKTICKET__

#include <string>
class WorkTicket
{
public:
	//Constructor
	WorkTicket(int ticket_number = 0, int day = 1, int month = 1, int year = 2000, const std::string& id = "", const std::string& desc = "");

	

	//GETTERS

	int GetTicketNumber() const;
	int GetDay() const;
	int GetMonth() const;
	int GetYear() const;
	std::string GetId() const;
	std::string GetDesc() const;

	//SETTERS
	void SetTicketNumber(int ticket_number);
	void SetDay(int day);
	void SetMonth(int month);
	void SetYear(int year);
	void SetId(const std::string& id);
	void SetDesc(const std::string& desc);

	//METHODS
	bool SetWorkTicket(int ticket_number, int day, int month, int year, std::string id, std::string desc);
	void ShowWorkTicket();


private:
	int m_ticket_number;
	std::string m_id;
	int m_day;
	int m_month;
	int m_year;
	std::string m_desc;


};

#endif /* defined (__WORKTICKET__) */

