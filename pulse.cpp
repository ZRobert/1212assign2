/*///////////////////////////////////////////////
Program: pulse.cpp
Author: Robert Payne
Lab Section: ITCS1212-L15
Date: 2/5/2012
Purpose:    Computer calculates the user's target
            training heart rate. The user inputs
            their age and the program calculates
            their target heart rate and outputs
            their target range.
*//////////////////////////////////////////////*/

#include <iostream>

using namespace std;

int main()
{
    int userAge; //user inputs age into here
    float targetLow; //user's lower target heart rate
    float targetHigh; //user's upper target heart rate

    cout << "Please input your age: \a";
    cin >>userAge;

    //calculate the target heart rate range

    targetLow = (220 - userAge) * .72;
    targetHigh = (220 - userAge) * .87;

    //outputs the results for the user to see
    
    cout << "------------------------------------------\n";
    cout << "Your target heart rate during exercise is \nbetween "
        <<targetLow <<" and " <<targetHigh <<" beats per minute \n\a";
    cout << "------------------------------------------\n";
    
    return 0;
}

