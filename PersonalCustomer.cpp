#include "PersonalCustomer.h"


PersonalCustomer::PersonalCustomer()
{
	type = "Normal";
}


PersonalCustomer::~PersonalCustomer()
{
}

void PersonalCustomer::ShowInfo() {
	cout << "Privat customer name: " << name << endl;
};
