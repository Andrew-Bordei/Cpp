#include <iostream>

int main()
{
    // Write out all the numbers between 100-500 that are 
    // divisible by 3 & 5 

    /*int counter = 100; 
    while (counter <= 500)
    {
        if (counter % 3 == 0 && counter % 5 == 0)
            std::cout << counter << " is divisible by 3 & 5\n";
        else if (counter % 3 == 0 && counter % 5 != 0)
            std::cout << counter << " is divisible by 3\n";
        else if (counter % 3 != 0 && counter % 5 == 0)
            std::cout << counter << " is divisible by 5\n";
        counter++;
    }*/

    // Count digits of a number 
    //int number; 
    //std::cout << "Number: "; 
    //std::cin >> number; 

    //if (number == 0)
    //    std::cout << "You've entered 0. Please enter a number > 0\n";
    //else
    //{
    //    int counter = 0; 
    //    while (number > 0)
    //    {
    //        number /= 10; // truncates last digit 
    //        counter++;
    //    }
    //    std::cout << "Number contains " << counter << " digits\n";
    //}

    // Reversing number 
    int number, reversedNumber=0; 
    std::cout << "Number: "; 
    std::cin >> number; 

    while (number!=0)
    {
        reversedNumber *= 10;
        //int lastDigit = number % 10;
        reversedNumber += number % 10; 
        number /= 10; 
    }
    std::cout << "Reversed number: " << reversedNumber;
    system("pause>0");
}

