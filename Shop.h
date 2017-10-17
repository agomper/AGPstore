#pragma once
#include <vector>
#include "Group.h"
#include "PersonalCustomer.h"
#include "CompanyCustomer.h"
#include "VIPCustomer.h"
#include <iostream>
using namespace std;

class Shop
{
	vector <Group> GroupVector;
	vector <PersonalCustomer> PCustomerVector;
	vector <CompanyCustomer> CCustomerVector;
public:
	Shop();
	~Shop();
	void listGroups();
	void listProducts(int GroupNumber);
	void searchByName(string SearchTarget);
	void modifyProduct(int GroupNum, int ProductNum);
	void addProduct(int GroupNum);
	void addProductPromotion(int GroupNum);
	void deleteProduct(int GroupNum, int ProductNum);
	void checkQuantity(int GroupNum, int ProductNum);
	void listCustomers();
};

