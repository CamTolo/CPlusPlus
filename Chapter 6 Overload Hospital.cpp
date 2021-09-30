// Chapter 6 Overload Hospital.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
	Written By: Cameron Tolodziecki
	Date: 9/19/21
*/

#include <iostream>

using namespace std;

//Insert functions
double inputValidate(double);
double calculateTotalCharges(double, double);
double calculateTotalCharges(double, double, double, double);

//Insert User choice
char userChoice(char);

int main()
{
	char user_choice{};
	double days_spent{};
	double daily_rate{};
	double medical_charges{};
	double services_charges{};
	double total_charges{};

	//User Input
	cout << "Where you admitted as an Inpatient or an Outpatient" << endl;
	cout << "Enter 1 for Inpatient and 2 for Outpatient" << endl;
	user_choice = userChoice(user_choice);

	if (user_choice == 1)
	{
		cout << "Number of days spent in hospital: ";
		days_spent = inputValidate(days_spent);
		cout << "Daily Rate: ";
		daily_rate = inputValidate(daily_rate);
		cout << "Medical Charges: ";
		medical_charges = inputValidate(medical_charges);
		cout << "Hospital Services Charges: " << "Example: Labs, Test, etc.";
		services_charges = inputValidate(services_charges);
		cout << "Total Charges = $" << total_charges;
		total_charges = calculateTotalCharges(days_spent, daily_rate, medical_charges, services_charges);
	}
	else
		cout << "Hospital Medical Charges = $";
	medical_charges = inputValidate(medical_charges);
	cout << "Hospital Services Charges = $" << "Example: Labs, Test, etc.";
	services_charges = inputValidate(services_charges);
	cout << "Total Charges = $" << total_charges;
	total_charges = calculateTotalCharges(medical_charges, services_charges);

	return 0;
}

//Make user Enter a number 
double inputValidate(double num)
{
	while (!(cin >> num) || num < 0) {
		cout << "Error. Number must not be 0";
		cin.clear();
	}
	return num;
}

//Calculate total charges for inpatient
double calculateTotalCharges(double days_spent, double daily_rate, double medical_charges, double services_charge)
{
	return (days_spent * daily_rate) + medical_charges + services_charge;
}


//Calculate total Charges for outpatient
double calculateTotalCharges(double med_charges, double services_charges)
{
	return med_charges + services_charges;
}

//Make user enter either 1 or 2
char userChoice(char num)
{ 
	char letter{};
	while (!(num == '1')) (letter == '2');
	{
	cout << "Error. Enter 1 or 2: ";
	cin.clear();
	cin >> num;
	}
	return num;
}





