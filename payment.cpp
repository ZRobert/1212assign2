/*///////////////////////////////////////////////
Program: payment.cpp
Author: Robert Payne
Lab Section: ITCS1212-L15
Date: 2/5/2012
Purpose:    This program asks the user for the
            annual interest rate, the number of
            payments, and the loan amount. The
            program calculates the amount of each
            payment, the interest paid, and the
            total and displays them for the user.
*//////////////////////////////////////////////*/

#include <iostream>
#include <cmath>  //needed for the pow(x,n) function for x^n

using namespace std;

int main()
{

    //user inputs
    float loanAmount; //the amount of the loan
    float numberPayments; //the number of payments
    float annualInterest; //annual interest rate

    //calculated; output
    float totalAmount; //total amount to be paid for loan
    float monthInterest; //monthly interest rate
    float monthPayment; //the monthly payment
    float interestPaid; //the amount of interest collected from the loan

    //prompt for loan amount, number of payments, and annual interest
    cout << "Please enter the amount borrowed: ";
    cin >> loanAmount;
    cout << "Please enter the total number of payments: ";
    cin >> numberPayments;
    cout << "Please enter the annual interest rate as a whole number: ";
    cin >> annualInterest;

    //calculate the total amount, monthly interest, monthly payment,
    //and interest paid
    monthInterest = annualInterest / 12; //computes monthly interest

    monthPayment = (monthInterest/100) * (pow((monthInterest/100) +1, numberPayments))/
        (pow(1 + (monthInterest/100), numberPayments) - 1) *loanAmount; //monthly payment formula

    totalAmount = monthPayment * numberPayments; //gets the total by multiplying the monthly
                                                 //payment by number of payments

    interestPaid = totalAmount - loanAmount; //subtracts total by loan to get interest

    //Output about the loan from calculations
    cout << "---------------------------------\a\n";
    cout << "Loan Amount: \t\t$" << loanAmount << endl;
    cout << "Monthly Interest: \t" << monthInterest << "%\n";
    cout << "Number of Payments: \t" << numberPayments << endl;
    cout << "Monthly Payment: \t$" << monthPayment << endl;
    cout << "Amount Paid Back: \t$" << totalAmount << endl;
    cout << "Interest Paid: \t\t$" << interestPaid << endl;
    cout << "---------------------------------\a\n";

    return 0;
}
