#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	total_days = 265;
	if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
	{
		total_days = 366;
	}
	if (month < 1 || day > 31 || day < 1 )
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}
	if (month == 2 && day == 29 && total_days == 366)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
	}
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", total_days - day);
        }
    
}

