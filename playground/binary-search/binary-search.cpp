/* Implementation of binary search algorithm */
#include <iostream>
#include <cmath>

/* TO DO: Consider adding the ability to test if 
 * the given array is indeed in ascending order */

int BinarySearch(const int arr[], int size, int key)
{
	int low{};
	int high = size;
	int midpoint = std::floor((high + low) / 2);

	for (int i{}; i < size; ++i)
	{
		if (arr[i] == key)
			return i;
		else if(arr[i] < key)   // shit left
		{
			high = midpoint;
			midpoint = std::floor((high +low) / 2);
		}
		else // shift right
		{
			low = midpoint;
			midpoint = std::floor((high + low) / 2);
		}
	}
	return -1;    // not found
}

int main()
{
	int numbers[]{2, 5, 6, 14, 16, 24, 32, 63};
	int size{sizeof(numbers)/sizeof(int)};
	int key{16};
	int keyIndex{};

	std::cout << "[ ";
	for (int i{}; i < size; ++i)
		std::cout << numbers[i] << " ";
	std::cout << "]\n" << std::endl;
	keyIndex = BinarySearch(numbers, size, key);
	if (keyIndex == -1)
		std::cout << "Key " << key << " not found." << std::endl;
	else 
		std::cout << "Key " << key << " is located at element " 
			<< keyIndex << "." << std::endl;

	// try user-input
	std::cout << "\n> ";
	std::cin >> key;
	keyIndex = BinarySearch(numbers, size, key);
	if (keyIndex == -1)
		std::cout << "Key " << key << " not found." << std::endl;
	else 
		std::cout << "Key " << key << " is located at element " 
			<< keyIndex << "." << std::endl;

}
