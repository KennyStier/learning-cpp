#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{ //This program will tell you what to do regarding your test grade

float Testgrade;
int judgedpeople = 3;

for (int i = 0; i < judgedpeople; i++)
{
   cout << " Please enter your honest test grade" << endl;
    cin >> Testgrade;

    if (Testgrade <= 55.00)
    {
        cout << " You might consider a career serving cheeseburgers at Macdonalds";
    }
    else if (Testgrade <= 65.00)
    {
        cout << " You have been upgraded, you may now consider a life long career at Chik-fil-A serving them chickens";
    }
    else if (Testgrade <= 70.00) 
    {
        cout << "Visit the ARC you dirty slacker!";
    }
    else if (Testgrade <= 80.00)
    {
        cout << "You might have the mental capacity to work in a factory";
    }
    else if (Testgrade <= 90.00)
    {
        cout << "You are meeting the expectations";
    }
    else if (Testgrade < 100.00)
    {
            cout << "NERD!!!!!!!!!!" ;
    }
    else
    {
        cout << "Your are at the level of Kenny Rogers, Good deed Mr. 111";
    }
    cout << endl;
}
    return 0;
}
