#include <iostream>

void showMenu()
{
    std::cout << "*****MENU*****" << std::endl;
    std::cout << "1. Check balance" << std::endl;
    std::cout << "2. Deposit" << std::endl;
    std::cout << "3. Withdraw" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "**************" << std::endl;
}

int main()
{
    // check balance, deposit, withdraw, show menu
    int option; 
    double balance = 500; 

    do {
        showMenu();
        std::cout << "Pick an option: ";
        std::cin >> option;
        system("cls");

        switch (option)
        {
        case 1: std::cout << "Balance is: " << balance << " $" << std::endl; break;
        case 2: std::cout << "Deposit amount: ";
            double depositAmount;
            std::cin >> depositAmount;
            balance += depositAmount;
                break;
        case 3: std::cout << "Withdraw amount: ";
            double withdrawAmount;
            std::cin >> withdrawAmount;
            if (withdrawAmount <= balance)
                balance -= withdrawAmount;
            else
                std::cout << "Not enough money" << std::endl;
            break;
        }
    } while (option != 4);

    system("pause>0");
}

