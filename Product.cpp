#include "Product.h"


Product::Product()
{
}


Product::~Product()
{
}

void Product::setName(string name) {
	this->name = name;
}

void Product::applyDiscount() {
	price = price*0.9;
}

void Product::setDescription(string description) {
	this->description = description;
}

void Product::setPrice(float price) {
	this->price = price;
}
void Product::setStock(int stock) {
	this->stock = stock;
}