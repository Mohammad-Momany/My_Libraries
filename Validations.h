#pragma once

#include <iostream>
using namespace std;

namespace Val {
	int ReadLimitedNumber( int From, int To) {

    int EnteredNumber = 0;

    while (EnteredNumber > To || EnteredNumber < From || cin.fail()) {
        cout << "\n Plase enter the number :\n";
        cin >> EnteredNumber;

         if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid Number" << endl; 
        }
        else if (EnteredNumber > To)
            cout << "\nThe number Must be less than " << To << "\n";
        else if (EnteredNumber < From)
            cout << "\nThe number Must be greater than " << From << "\n";

    } 

    return EnteredNumber;

}
}
