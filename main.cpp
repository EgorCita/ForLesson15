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

bool IsLeapYear(DateTime & dt)
{
	return (dt.year %4 == 0 && dt.year %100 != 0) || (dt.year %400 == 0);
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

int main(){

}
