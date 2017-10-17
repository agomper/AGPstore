#pragma once
#include "PersonalCustomer.h"
class VIPCustomer :
	public PersonalCustomer
{
	int VIPClubNumber;
public:
	VIPCustomer();
	~VIPCustomer();
	void ShowInfo();
};

