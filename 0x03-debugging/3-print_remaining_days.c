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
    int total_days = 365;
    int leap_year = 0;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                leap_year = 1;
            }
        }
        else
        {
            leap_year = 1;
        }
    }

    if (leap_year)
    {
        total_days = 366;
    }

    if (month < 1 || month > 12)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    if (day < 1 || day > 31)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    if (month == 2 && day == 29 && !leap_year)
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    int day_of_year = convert_day(month, day);

    printf("Day of the year: %d\n", day_of_year);
    printf("Remaining days: %d\n", total_days - day_of_year);
}
