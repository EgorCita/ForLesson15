#include <iostream>
#include "time.h"

class DateTime
{
public:
  int year;
  int month;
  int day;
  int hour;
  int min;
  int sec;
  int millisec;
};

bool IsLeapYear(int year)
{
	return (year %4 == 0 && year %100 != 0) || (year %400 == 0);
}

int LaterInYear(DateTime & dt1, DateTime & dt2)
{
	if ((dt1.month == dt2.month ? dt1.day > dt2.day : dt1.month > dt2.month))
	{
		return 1;
	}
	else
	{
		return 2;	
	}
}

int DaysInYear(int year)
{
	if (isLeapYear(dt))
	{
		return 366;
	}
	else
	{
		return 365;
	}
}

int DaysInYearRange(int yearl, int yearr)
{
	int ans = 0;
	for (int i = yearl; i <= yearr; ++i)
	{
		ans += DaysInYear(i)
	}
	return ans;
}

int SeconsInHours(int hours)
{
	return 3600 * hours;
}

int main(){

}
