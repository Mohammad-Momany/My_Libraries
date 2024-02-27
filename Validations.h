#pragma once

#include <iostream>
using namespace std;

int ReadLimitedNumber( int From, int To) {

    int EnteredNumber = 0;

    do {
        cout << "\n Plase enter the number :\n";
        cin >> EnteredNumber;

        if (EnteredNumber > To)
            cout << "\nThe number Must be less than " << To << "\n";
        else if (EnteredNumber < From)
            cout << "\nThe number Must be greater than " << From << "\n";
    } while (EnteredNumber > To || EnteredNumber < From);

    return EnteredNumber;

}