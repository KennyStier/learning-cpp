//
//  Coin Tosser
//  Copyright (C) 2020 Kenneth Stier
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <https://www.gnu.org/licenses/>.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int getTossNumber() {
    int tossNumber;
    cout << "Enter toss number: ";
    cin >> tossNumber;
    return tossNumber;
}

int main()
{
    int i = 0;
    int heads = 0;
    int tails = 0;
    int tosses = 1000;
    srand(time(0));
    int toss[tosses] = { };
    cout << "Tossing coin " << tosses << " times..." << endl;
    while (i < tosses) {
        toss[i] = rand() % 2;
        if (toss[i]) {
            heads++;
        } else {
            tails++;
        }
        i++;
    }
    cout << "Heads: " << heads << endl;
    cout << "Tails: " << tails << endl;

    int tossNumber = getTossNumber();
    while (tossNumber > tosses || tossNumber < 0){
        cout << "Invalid input. Enter a number between 0 and " << tosses << endl;
        tossNumber = getTossNumber();        
    }
    if (toss[tossNumber]){
        cout << "Heads" << endl;
    } else {
        cout << "Tails" << endl;
    }
}