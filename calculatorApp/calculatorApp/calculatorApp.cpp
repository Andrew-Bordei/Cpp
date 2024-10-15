#include <iostream>

int main()
{
    float num1, num2; 
    char operation; 

    std::cout << "Andrew's calculator" << std::endl;
    std::cin >> num1 >> operation >> num2; 
    
    switch (operation)
    {
    case '-': std::cout << num1 << operation << num2 << "=" << num1 - num2; break; 
    case '+': std::cout << num1 << operation << num2 << "=" << num1 + num2; break;
    case '/': std::cout << num1 << operation << num2 << "=" << num1 / num2; break;
    case '*': std::cout << num1 << operation << num2 << "=" << num1 * num2; break;
    case '%': 
        bool isNum1Int, isNum2Int;
        isNum1Int=((int)num1 == num1); // truncates the num if its .0 
        isNum2Int = ((int)num2 == num2);

        if (isNum1Int && isNum2Int)
            std::cout << num1 << operation << num2 << "=" << isNum1Int % isNum2Int;
        else
            std::cout << "The operation is not valid";
        break;
    default: std::cout << "Please type a valid operation" << std::endl;
    }
    system("pause>0");
}


