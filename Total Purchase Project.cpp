// Total Purchase Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
	Written by: Cameron Tolodziecki
	Date Written: 8/26/21
*/
using namespace std;

#include <iostream>

int main()
{
	//Input item totals
	int item1 = 15.95;
	int item2 = 24.95;
	int item3 = 6.95;
	int item4 = 12.95;
	int item5 = 3.95;
	//Input tax rate
	double salesTax = 0.07, totalTax;
	//Insert subtotal of all items
	double subTotal = item1 + item2 + item3 + item4 + item5;

	//Insert Total for 
	double total = subTotal * salesTax;

	//Display Output
	cout << "Items by price $" << item1 << "$" << item2 << "$" << item3 << "$" << item4 << "$" << item5 << "sold at $";
	cout << "The SubTotal for all items" << subTotal << "total price";
	cout << "Tax Rate " << salesTax << "%";
	cout << "Total $" << total << "TotalTax" << totalTax << endl;
	
	//return
	return 0;
}


