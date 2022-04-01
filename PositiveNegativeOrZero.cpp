/*
Positive, Negative, or Zero
Pawelski
3/31/2022
Please follow the instructions on the activity sheet!
*/

#include <iostream>

int main()
{
    int number;
    std::cout << "Please enter a number >> ";
    std::cin >> number;
    if (number < 0)
    {
        std::cout << number << " is negative.\n";
    }
    else if (number > 0)
    {
        std::cout << number << " is positive.\n";
    }
    else
    {
        std::cout << number << " is neither positive or negative.\n";
    }
    return 0;
}
