#include <iostream>

int main()
{
    int hostUserNum, guestUserNum; 

    std::cout << "Host: "; 
    std::cin >> hostUserNum;
    system("cls"); // clears the console, to allow guest user to guess number 
    
    std::cout << "Guest: "; 
    std::cin >> guestUserNum;

    //Solve the problem using ternary operators 
    (hostUserNum == guestUserNum) ? std::cout << "Correct!" : std::cout << "Fail!";


    /*if (hostUserNum == guestUserNum)
        std::cout << "Correct!"; 
    else
        std::cout << "Fail!";*/


    system("pause>0");
}

