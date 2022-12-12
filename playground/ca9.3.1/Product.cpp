#include "Product.h"

void Product::SetPriceAndName(int productPrice, std::string ProductName)
{
	price = productPrice;
	name = ProductName;
}

int Product::GetPrice() const {return price;}

std::string Product::GetName() const {return name;}
