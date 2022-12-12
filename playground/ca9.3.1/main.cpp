#include <iostream>
#include <vector>
#include "Product.h"

int main()
{
	std::vector<Product> productList;
	Product currentProduct;
	int currentPrice;
	std::string currentName;
	unsigned int i;
	Product resultProduct;

	std::cin >> currentPrice;
	while (currentPrice > 0)  // fill product list
	{
		std::cin >> currentName;
		currentProduct.SetPriceAndName(currentPrice, currentName);
		productList.push_back(currentProduct);
		std::cin >> currentPrice;
	}

	resultProduct = productList.at(0);
	for (i = 0; i < productList.size(); ++i)
	{
		if (productList.at(i).GetPrice() > resultProduct.GetPrice())
			resultProduct = productList.at(i);    // most expensive product
	}

	std::cout << "$" << resultProduct.GetPrice() << " " << resultProduct.GetName() << std::endl;
}
