// Days of the Month.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Written by: Cameron Tolodziecki
    Date: 9/2/2021
*/

#include <iostream>
#include <iomanip>

using namespace std; 

int main()
{
    //Variables
    int year;
    int month;
    

    //Get user input
    cout << "Please Enter a month (1-12): \n";
    cin >> month;
    cout << "Please enter a year: \n";
    cin >> year;

    //Enter months
    if (month == 1)
            cout << "January has 31 days";
         else if (month == 2)
            cout << "Feburary has 28 days";
        else if (month == 3)
            cout << "March has 30 days\n";
        else if (month == 4)
            cout << "April has 30 days\n";
        else if (month == 5)
            cout << "May has 30 days";
        else if (month == 6)
            cout << "June has 30 days";
        else if (month == 7)
            cout << "July has 31 days";
        else if (month == 8)
            cout << "August has 31 days";
        else if (month == 9)
            cout << "September has 30 days";
        else if (month == 10)
            cout << "October has 31 days";
        else if (month == 11)
            cout << "November has 30 days";
        else if (month == 12)
            cout << "December has 31 days";
    cout << "\n" << endl;

    //Insert leap year
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
            cout << "This month has 29 days \n" << endl;
        else
            cout << "This month has 28 days \n" << endl;
    }
    else if (year % 4 == 0)
    {
        if (year % 4 == 0)
            cout << "This month has 29 days " << endl;
        else
            cout << "This month has 28 days " << endl;
    }

    //User enters a number higher then 12 for the month.
    if (month > 12)
    {
        if(month > 12)
            cout << "Invalid Month. Please try again. \n\n" << endl;
        else if (month <= 12)
            cout << "Thank you! I hope this helped you figure out the how many days are in each month!! \n" << endl;
    }
 
    return 0;
}


