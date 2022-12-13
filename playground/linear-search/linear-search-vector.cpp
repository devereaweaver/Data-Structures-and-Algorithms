#include <iostream>
#include <vector>

int LinearSearch(const std::vector<int> numbers, int key)
{
	/* Implementation of a linear search through 
	 * an array for a specified integer. */
	int i = 0;
	while (i < numbers.size())
	{
		if (numbers[i] == key)
			return i;
		i++;
	}
	return -1;
}

int main()
{
	std::vector<int> numbers{54,79,26,91,29,33};

	// best case scenario: key = 54
	std::cout << "Best case scenario: " << LinearSearch(numbers,54) << std::endl;

	// worse case scenario: key = 84 (DNE)
	std::cout << "Worst case scenario: " << LinearSearch(numbers, 84) << std::endl;

	// let's see...
	int num{};
	std::cout << "Enter integer >  ";
	std::cin >> num;
	std::cout << "Location of " << num << ": " << LinearSearch(numbers, num) << std::endl;
}
