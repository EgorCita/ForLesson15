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

bool IsLeapYear(DateTime dt)
{
	return (dt.year %4 == 0 && dt.year %100 != 0) || (dt.year %400 == 0);
}

int SecondsInMinute()
{
	return 60;
}

int main(){

}
