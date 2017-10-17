#pragma once
#include <string>
using namespace std;

class Product
{
protected:
	string name;
	string description;
	float  price;
	int stock;

public:
	Product();
	virtual ~Product();
	virtual void applyDiscount();
	string getName() { return name; };
	void setName(string name);
	void setDescription(string description);
	void setPrice(float price);
	void setStock(int stock);
	int getStock() { return stock; };
	string getDescription() { return description; };
	float getPrice() { return price; };
};

