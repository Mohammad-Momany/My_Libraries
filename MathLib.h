#pragma once

#include <iostream>
using namespace std;


int RandomNumber(int From, int To) {
    // Function to generate a random number
    int randNum = 1 + rand() % (To - From + 1) + From;
    return randNum;
}

int Facrorial(int N) {
    int Sum = 1;

    for (int i = N; i > 0; i--)
    {
        Sum *= i;
    }

    return Sum;
}

int MyRound(float Num) {

    float Rounded = 0;
    int floorNumber = Num;

    Rounded = (Num > 0) ? Num + 0.5 : Num - 0.5;

    if ((int)Rounded == floorNumber)
    {
        return floorNumber;
    }

    return Rounded;
}

int MyFloor(float Num) {

    return (Num > 0) ? Num : Num - 1;
}

int MyCeil(float Num) {

    return (Num > 0) ? Num + 1 : Num;
}

int MySqrt(float Num) {

    return pow(Num, 0.5);
}

int PowerNumbers(int Num, int Power) {
    int Result = 1;

    if (Power == 0) {
        return 1;
    }

    for (int i = 0; i < Power; i++)
    {
        Result *= Num;
    }

    return Result;
}