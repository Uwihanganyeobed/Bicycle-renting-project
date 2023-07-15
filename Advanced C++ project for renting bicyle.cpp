/*
You own a bicycle rental business and you want to write a program that will help you determine what your customers will have to pay you for a rental. You are going to provide two integers as input. The first integer represents the starting time (hour) and the second integer represent the ending time (hour). Decimal numbers are not accepted.  
(1) The starting time will always be less than the ending time. Also no rental can span more than a day. The start time will be between 0  and 23 and the ending time will be between 1 and 24.
(2) The rate per hour depends on the range as follows : 
          0 - 7    and 21- 24 : the rent will be 500 RWF per hour
          7-14:   and 19h-21: rent will be 1000 RWF per hour
         14-19 : the rent will be 1500 RWF per hour 
Write a C++ Program that implements the above  bicycle rental program
*/
#include <iostream>
using namespace std;
int timecalculate(int start_hour, int end_hour)
{
	int amount = 0;
	if ((start_hour < 0 || start_hour>23) || (end_hour < 1 || end_hour>24))
	{
		return -1;
	}
	else
	{
		for (int hour = start_hour; hour < end_hour; hour++)
		{
			if ((hour >= 0 && hour < 7) || (hour >= 21 && hour < 24))
			{
				amount += 500;
			}
			else if ((hour >= 7 && hour < 14) || (hour >= 19 && hour < 21))
			{
				amount += 1000;
			}
			else if (hour >= 14 && hour < 19)
			{
				amount += 1500;
			}
		}
	}
	return amount;
}
int main()
{
	int starting;
	int ending;
	cout << "enter your starting time\n\t";
	cin >> starting;
	cout << "enter your ending time\n\t";
	cin >> ending;
	int amount = timecalculate(starting, ending);
	if (amount == -1)
	{
		cout << "incorrect choice you must exceed a day please!!!!!!!\n\t";
	}
	else
	{
		cout << "amount to pay is : " << amount << "\n\t";
	}
	return 0;
}
