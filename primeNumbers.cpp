#include <iostream>

bool isPrimeNumber(int number)
{
    bool isPrime = true;

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false; 
        }
    }

    return isPrime;
}

int main()
{
    // Prime number: divisible only by itself and 1 
    for (int i = 1; i <= 100000; i++)
    {
        bool isPrimeFlag = isPrimeNumber(i);

        if (isPrimeFlag)
            std::cout << i << " is a prime number\n";
    }

    system("pause>0");
}
