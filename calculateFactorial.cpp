#include <iostream>

int main()
{
   // Calculate the factorial of a number 
	int number; 
	std::cout << "Number: ";
	std::cin >> number; 

	int factorial = 1; 

	/*for (int i = 1; i <= number; i++)
	{
		factorial *= i;
	}*/

	for (int i = number; i >= 1; i--)
	{
		factorial *= i;
	}

	std::cout << "The factorial is: " << factorial;


	system("pause>0");
}

