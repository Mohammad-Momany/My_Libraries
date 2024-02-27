#include <iostream>

#include "Validations.h"

int main()
{
    int number = Val::ReadLimitedNumber(1, 10);

    std::cout << "The Number is " << number << endl;
}
