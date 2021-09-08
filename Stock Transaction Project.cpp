// Stock Transaction Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
    Written By: Cameron Tolodziecki
    Date Written: 8/30/2021
*/

#include <iostream>

using namespace std;

int main()
{
    //Insert Variables
    const float broker_commission = 0.02;
    const float price_per_share = 45.50;
    const float price_sold = 56.90;

    int shares = 1000;
    
    float joes_purchase;
    float total_com_paid_bought;
    float total_com_paid_sold;
    float amount_stock_sold_for;
    float profit;

    //Program Calculations
    joes_purchase = shares * price_per_share;
    total_com_paid_bought = joes_purchase * broker_commission;
    amount_stock_sold_for = shares * price_per_share;
    total_com_paid_sold = amount_stock_sold_for * broker_commission;
    profit = (amount_stock_sold_for - (total_com_paid_bought + total_com_paid_bought)) - joes_purchase;
    

    //Explanation
    cout << endl;
    cout << "Welcome to my program!";
    cout << "\n\n";
    cout << "Here are some details: ";
    cout << "\n\n\n\n\n";
    cout << "Joe purchased some stock in Acme Software! ";
    cout << "Joe purchased 1000 shares, and ";
    cout << "Joe paid 45.50 per share. ";
    cout << "Joe paid his broker a commission of 2% per share. ";
    cout << "Joe then kept his stocks for two weeks, and then sold the all of the stock he had! ";
    cout << "\n\n\n";
    cout << "The sale was this: \n";
    cout << "Joe sold his stock for 56.90 per share. \n";
    cout << "Joe paid his broker another 2% commission on the sale.";
    cout << "\n\n\n\n\n";

    cout << "Sale Calculations: ";
    cout << "\n\n\n\n";

     //Display Output
    cout << "Amount Joe Paid for stock: " << joes_purchase << endl;
    cout << "Amount of commission paid when stock purchased: " << total_com_paid_bought << endl;
    cout << "Amount stock sold for: " << amount_stock_sold_for << endl;
    cout << "Amout commission paid when stock sold: " << total_com_paid_sold << endl;
    cout << "Amount of profit Joe made in total after two commission payouts to broker: " << profit << endl;
    cout << "\n\n\n\n" << endl;


    return 0;
}

