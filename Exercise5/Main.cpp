#include <iostream>
#include <iomanip>


int main()
{
	int myFirstArray[10];
	int number = -1;

	std::cout << "Enter a number if you want: ";
	std::cin >> std::setw(1) >> number;

	int i;
	int sum = 0;
	for (i = 0; std::cin.good() != false && i < 10; i++)
	{
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');

		myFirstArray[i] = number;
		sum += number;

		if (i == 9) 
		{
			std::cout << "I did not account for this. Array is now full." << std::endl;
			continue;
		}
		std::cout << "Enter a number if you want: ";
		std::cin >> std::setw(1) >> number;
	}

	std::cout << "Total numbers entered: " << i << std::endl;
	std::cout << "Total sum of numbers entered: " << sum << std::endl;


}