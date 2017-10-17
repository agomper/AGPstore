#pragma once
#include <string>
using namespace std;
#include <iostream>

class Customer
{
protected:
	string name;
public:
	Customer();
	virtual ~Customer();
	virtual void ShowInfo() = 0;
	void setName(string name) { this->name = name; };
	string getName() { return name; }
};

