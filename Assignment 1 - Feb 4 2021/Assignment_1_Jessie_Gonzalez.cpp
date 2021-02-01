//
// Assignment_1_Jessie_Gonzalez.cpp
//
//Jessie Gonzalez
//Feb 1, 2021
//Assignment #1 for CS14
//This program takes a users input for Feet and Miles and converts into Kilometers.
//

#include <iostream>
using namespace std;

int main ()
{
    const int MILES = 5280; // One mile is 5280 feet
    const float METER = 3.28; //One meter is 3.28ft
    const float KILOMETER = 1000; //One kilometer is 1000meters
    int userInputMiles;
    float userInputFeet;
    float feetToMeters, milesToMeters, metersToKilometers;
    
    cout << "Hello there, please enter Miles: ";
    cin >> userInputMiles;
    cout << "Now tell me how many feet? "; 
    cin >> userInputFeet;

    //Product of feet to meters.
    feetToMeters = (userInputFeet / METER); 
    
    //Product of miles into feet into Meters
    milesToMeters = (userInputMiles * MILES) / METER; 
    
    //Adding up the both products above in Meters to convert to Kilometers.
    metersToKilometers = (milesToMeters / KILOMETER) + (feetToMeters / KILOMETER);

    cout << userInputMiles << " Miles and " << userInputFeet << " feet " << "equals" << " " << metersToKilometers << " " << "kilometers.\n";

    return 0;

}