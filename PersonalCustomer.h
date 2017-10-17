#pragma once
#include "Customer.h"

class PersonalCustomer :
	public Customer
{
protected:
	char PersonalID[10];
	string type;
public:
	PersonalCustomer();
	~PersonalCustomer();
	virtual void ShowInfo();
	string getType() { return type; };
};

