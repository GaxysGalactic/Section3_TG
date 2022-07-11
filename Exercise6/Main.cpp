#include <iostream>
#include <iomanip>

int main()
{
	int myBetterArray[10];
	int number = -1;
	int i;
	int sum = 0;

	for (i = 0; i < 10; i++)
	{
		std::cout << "Enter a number if you want or press ENTER to finish: ";

		if (std::cin.peek() == 10) break;
		std::cin >> std::setw(1) >> number;

		while (std::cin.good() == false)
		{
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
			std::cout << "Please enter a valid number or press ENTER to finish!" << std::endl << std::endl;
			std::cout << "Enter a number if you want or press ENTER to finish: ";
			std::cin >> std::setw(1) >> number;
		}
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');

		myBetterArray[i] = number;
		sum += number;

		if (i == 9)
		{
			std::cout << "I did not account for this. Array is now full." << std::endl;
			continue;
		}
	}

	std::cout << "Total numbers entered: " << i << std::endl;
	std::cout << "Total sum of numbers entered: " << sum << std::endl;


}