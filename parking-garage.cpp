#include<stdio.h>
#include<iostream>

using namespace std;
/*
    Write a C program to calculate the parking fare for customers who park their cars in a parking lot

*/
int main()
{
    int printReceipt() {
        cout << "           PARKING LOT CHARGE          ";
        cout << "                                       ";
        cout << "Type of vehicle: Car or Bus or Truck   ";
        cout << 
    }

    // A variable to store count of apples.
    char vehicleType;
    char vehicleChoice;

    cout << "Type of vehicle? ";
    cin >> vehicleChoice;

    switch(vehicleChoice)
    {
    case 'C' : 
    case 'c' : 
        vehicleType = 'c';
        break;
    case 'T' :
    case 't' : 
        vehicleType = 't';
        break;
    case 'B' :
    case 'b' : 
        vehicleType = 'b';
        break;
    default :
        cout << "Invalid entry, please enter only: C, T, or B";
		break;
   }

    int hourEntered;
    int minuteEntered;
    int hourLeft;
    int minuteLeft;

    cout << "Hour entered: ";
    cin >> hourEntered;
    while (hourEntered < 0 || hourEntered > 24)
    {
        cout << "Invalid entry.";
        cout << "Hour entered: ";
        cin >> hourEntered;
    }

    cout << "Minute entered: ";
    cin >> minuteEntered;
    while (minuteEntered < 0 || minuteEntered > 60)
    {
        cout << "Invalid entry.";
        cout << "Minute entered: ";
        cin >> minuteEntered;
    }

    cout << "Hour left: ";
    cin >> hourLeft;
    while (hourLeft < 0 || hourLeft > 24)
    {
        cout << "Invalid entry.";
        cout << "Hour left: ";
        cin >> hourLeft;
    }

    cout << "Minute left: ";
    cin >> minuteLeft;
    while (minuteLeft < 0 || minuteLeft > 60)
    {
        cout << "Invalid entry.";
        cout << "Minute left: ";
        cin >> minuteLeft;
    }

    return 0;
}