#pragma once

#include <iostream>
using namespace std;

namespace Val {

    int ReadLimitedNumber(string message, int From, int To) {

        int EnteredNumber = 0;

        do {
            cout << message;
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

        } while (EnteredNumber > To || EnteredNumber < From || cin.fail());

        return EnteredNumber;

    }
    
    int ReadPositiveNumber(string message) {

        int EnteredNumber = 0;

        do {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid Number" << endl;
            }
            cout << message << endl;
            cin >> EnteredNumber;
        } while (EnteredNumber < 0 || cin.fail());

        return EnteredNumber;
    }
}
