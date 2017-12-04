/** \ Gearoid Hanrhan
 *
 * \ Exercise 11
 * \ Computer programming
/** Preprocessor directives */
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <windows.h>
#include <math.h>
using namespace std;

struct date
{
    int day ;
    int month ;
    int year ;
};
//** Main function */
int main()
{
    int monthlength [12] = {31, 28, 31, 30, 30, 30, 31, 31, 30, 31, 30, 31};

    struct date today, tomorrow;
    //rEAD IN d/m/t
    cout << "Enter Todays Date\n\n" ;
    cout << "Day :\t" ;
    cin >> today.day ;
    cout << "Month :\t" ;
    cin >> today.month;
    cout << "Year :\t" ;
    cin >> today.year;

    cout << "\n\nTodays Date is :\t" << today.day << "/" << today.month << "/" << today.year << endl;

    //**< An if else startment */
    if(today.year % 4 == 0)
    {
        if(today.year % 100 == 0)
        {
            if(today.year % 400 == 0)
            {
                monthlength[1] = 29;
            }
        }
        else
        {
            monthlength[1] = 29;
        }
    }
    //**< Second if else statement */
    if(today.day >= monthlength[today.month -1])
    {
        if (today.month == 12)
        {
            tomorrow.day = 1;
            tomorrow.month = 1;
            tomorrow.year = today.year + 1;
        }
        else
        {
            tomorrow.day = 1;
            tomorrow.month = today.month + 1;
            tomorrow.year = today.year;
        }
    }
    else
    {
        tomorrow.day = today.day +1;
        tomorrow.month = today.month;
        tomorrow.year = today.year;
    }


    //**< This is where it will be returned out on the screen */
    cout << "\n\nTomorrows Date is :\t" << tomorrow.day << "/" << tomorrow.month << "/" << tomorrow.year << endl;


    return 0;
}
