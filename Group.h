#pragma once
#include <string>
#include "Product.h"
#include "POffer.h"
using namespace std;
#include <vector>
#include <iostream>

class Group
{
private:
	string name;
	vector <Product> ProductVector;
public:
	Group();
	~Group();
	string getname();
	void setname(string name);
	void listProducts();
	vector <Product> &getProductVector() { return ProductVector; };
};


