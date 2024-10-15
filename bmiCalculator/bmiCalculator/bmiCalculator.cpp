

#include <iostream>

int main()
{
	// BMI calculator 
	// weight kg / height * height m 
	// underwieght < 18.5 
	// Normal weight 18.5-24.9 
	// Overweight > 25 

	float height, weight, bmi; 

	std::cout << "Please enter your height(m) & your weight(kg)" << std::endl;
	std::cin >> height >> weight; 

	bmi = weight / (height * height);

	if (bmi < 18.5)
		std::cout << "BMI: " << bmi << " You're underweight! Eat more steak!!" << std::endl;
	else if (bmi > 25)
		std::cout << "BMI: " << bmi << " You're overweight! Start training MMA!!" << std::endl; 
	else
		std::cout << "BMI: " << bmi << " You're normal weight! Zeus is pleased!!" << std::endl;
	system("pause>0");

}

