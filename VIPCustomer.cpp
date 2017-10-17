#include "VIPCustomer.h"


VIPCustomer::VIPCustomer()
{
	type = "VIP";
}


VIPCustomer::~VIPCustomer()
{
}

void VIPCustomer::ShowInfo() {
	cout << "VIP customer name: " << name << endl;
};