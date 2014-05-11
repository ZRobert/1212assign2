/*///////////////////////////////////////////////
Program: investment.cpp
Author: Robert Payne
Lab Section: ITCS1212-L15
Date: 2/5/2012
Purpose:    This program calculates the value of an
            investment made at birth to current age.
            It asks the user for the
            the initial amount invested, the
            annual interest rate as percent
            and age. It then calculates the value
            of the investment when is it withdrawn
            and outputs that for the user to see.
*//////////////////////////////////////////////*/

#include <iostream>
#include <cmath>  //needed for the pow(x,n) function for x^n

using namespace std;

int main()
{
    //user inputs: initial investment, annual interest rate, and age
    float initialInvestment; //this is the initial investment
    float annualInterest; //annual interest rate on the account
    float userAge; //age of the user in years

    //calculated output
    float quarters; //number of quarters (years * 4)
    float quarterlyInterest; //quarterly interest rate = annual rate / 4
    float valueNow; //current value of the investment

    //gathering the user's input
    cout << "Please enter the initial investment value: $";
    cin >> initialInvestment;
    cout << "Please enter the annual interest rate in percent: ";
    cin >> annualInterest;
    cout << "Please enter your age in years: ";
    cin >> userAge;

    //quarterly compounding interest calculations
    quarters = userAge * 4; //quarters happen 4 times per year

    quarterlyInterest = annualInterest / 4; //deriving the quarterly interest from the annual

    valueNow = initialInvestment *
    (pow(1 + (quarterlyInterest/100), quarters)); //compounding interest formula

    //output of the current value of the investment
    cout << "The current value of your savings investment is :$ " << valueNow;
    return 0;
}
