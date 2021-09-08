// Rock Paper Scissors Game.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*
        Written By: Cameron Tolodziecki
        Date: 9/4/2021
*/

#include <iostream>

using namespace std;

    //Add variables
    const int ROCK = 1;
    const int PAPER = 2;
    const int SCISSORS = 3;

    //Add user choice
    int userChoice = 0;

    //Computer choice
    int getComputerChoice()
    {
        srand(time(NULL));
        int compChoice = rand() % 3 + 1;
        return compChoice;
    }

    //Get Winner
    void determineWinner(int userChoice, int compChoice)
    {
        if (userChoice == ROCK && compChoice == PAPER) {
            cout << "Computer wins! Paper covers Rock!\n" << endl;
        }
        else if (userChoice ==  PAPER && compChoice == SCISSORS) {
            cout << "Computer Wins! Scissors cuts Paper!\n" << endl;
        }
        else if (userChoice == SCISSORS && compChoice == ROCK) {
            cout << "Computer Wins! Rock smashes Scissors!\n" << endl;
        }
        else if (userChoice == ROCK && compChoice == SCISSORS) {
            cout << "YOU WIN! Rock smashes Scissors!\n" << endl;
        }
        else if (userChoice == PAPER && compChoice == ROCK) {
            cout << "YOU WIN! Paper covers Rock!\n" << endl;
        }
        else if (userChoice == SCISSORS && compChoice == PAPER) {
            cout << "YOU WIN! Scissors cuts Paper!\n" << endl;
        }
        else {
            cout << "Tie! Go again\n" << endl;
        }

    }

    //Display Choice
    void displayChoice(int choice)
    {
        string result;
        if (choice == ROCK) {
            result == "Rock";
        }
        else if (choice == PAPER) {
            result == "Paper";  
        }
        else {
            result == "Scissors";
        }
        cout << result << endl;
    }
 int main()
{
     cout << "Welcome to ROCK, PAPER, SCISSORS" << endl;
        
     cout << "Game Menu" << endl;
     cout << "------" << endl;
     cout << "1. Rock" << endl;
     cout << "2. Paper" << endl;
     cout << "3. Scissors\n" << endl;

     cout << "Enter your choice: ";
     cin >> userChoice;
     cout << "You Selected: " << userChoice << endl;
     displayChoice(userChoice);
        
     int compChoice = getComputerChoice();
     cout << "The computer selected: " << compChoice << endl;
     displayChoice(compChoice);

     determineWinner(userChoice, compChoice);
     cout << "\n\n\n" << endl;

     return 0;
}


