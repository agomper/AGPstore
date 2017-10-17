#pragma once
#include "Customer.h"
class CompanyCustomer :
	public Customer
{
protected:
	char OrganizationID[10];
public:
	CompanyCustomer();
	~CompanyCustomer();
	void ShowInfo();
};

