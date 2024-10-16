#include <iostream>

int main()
{
    int userPin = 12345, pin, errorCounter=0;

    do {
        std::cout << "PIN: "; 
        std::cin >> pin; 
        if (pin != userPin)
            errorCounter++;

    } while (errorCounter < 3 && pin!=userPin);

    if (errorCounter < 3)
        std::cout << "Loading...";
    else
        std::cout << "Account blocked...";


    system("pause>0");
}