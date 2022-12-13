/* Linear search implementation using an array */
#include <iostream>

int LinearSearch(const int numbers[],int size,  int key)
{
	/* Implementation of a linear search through 
	 * an array for a specified integer. */
	int i = 0;
	while (i < size)
	{
		if (numbers[i] == key)
			return i;
		i++;
	}
	return -1;
}

void indexResult(int key, int keyIndex)
{
	if (keyIndex == -1)
		std::cout << "Key = " << key 
			<< " not found in array." << std::endl;
	else
		std::cout << "Key = " << key 
			<< " is located at index " << keyIndex
			<< std::endl;
}

int main()
{
	int numbers[]{54,79,26,91,29,33};
	int size = sizeof(numbers)/sizeof(int);
	int key{};
	int keyIndex{};

	std::cout << "[ ";
	for (size_t i{}; i < size; ++i)
		std::cout << numbers[i] << " ";
	std::cout << "]\n" << std::endl;

	// best case scenario: key = 54
	std::cout << "Search for key = 54..." << std::endl;
	key = 54;
	keyIndex = LinearSearch(numbers, size, key);
	indexResult(key, keyIndex);

	// worse case scenario: key = 84 (DNE)
	std::cout << "\nSearch for key = 84..." << std::endl;
	key = 84;
	keyIndex = LinearSearch(numbers, size, key);
	indexResult(key, keyIndex);


	// let's see...
	std::cout << "\nEnter integer >  ";
	std::cin >> key;
	keyIndex = LinearSearch(numbers, size, key);
	indexResult(key, keyIndex);
}
