#include <iostream>
#include <iomanip>

int main()
{
	int choice = -1;
	int numberOfAttempts = 0;

	std::cout << "Please enter a number between 1-10: ";
	std::cin >> std::setw(1) >> choice;
	numberOfAttempts++;

	while (choice < 1 || 10 < choice || std::cin.good() == false)
	{
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');

		std::cout << "Please enter a number between 1-10: ";
		std::cin >> std::setw(1) >> choice;
		numberOfAttempts++;
	}

	if (numberOfAttempts > 5)
	{
		std::cout << "You FINALLY entered: " << choice;
	}
	else
	{
		std::cout << "Thank you. You entered: " << choice;
	}

}