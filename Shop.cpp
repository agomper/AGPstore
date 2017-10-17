#include "Shop.h"
#include "Customer.h"
#include "PersonalCustomer.h"
#include "CompanyCustomer.h"
#include "VIPCustomer.h"
#include <vector>
#include <fstream>

Shop::Shop()
{
	Group a, b, c, d, e;
	a.setname("Games");
	b.setname("Laptops");
	c.setname("Printers");
	d.setname("Televisions");
	e.setname("Smartphones");
	GroupVector.push_back(a);
	GroupVector.push_back(b);
	GroupVector.push_back(c);
	GroupVector.push_back(d);
	GroupVector.push_back(e);

	PersonalCustomer p1, p2;
	p1.setName("Name 1");
	p2.setName("Name 2");

	CompanyCustomer c1, c2;
	c1.setName("Name 1");
	c2.setName("Name 2");

	VIPCustomer v1, v2;
	v1.setName("NameVIP 1");
	v2.setName("NameVIP 2");
	
	PCustomerVector.push_back(p1);
	PCustomerVector.push_back(p2);
	PCustomerVector.push_back(v1);
	PCustomerVector.push_back(v2);

	CCustomerVector.push_back(c1);
	CCustomerVector.push_back(c2);
	
}


Shop::~Shop()
{
}

void Shop::listGroups() {
	char option;

	system("cls");
	cout << "Product groups: \n" << endl;
	for (int i = 0; i < GroupVector.size(); i++) {
		cout << i << "- " << GroupVector[i].getname() << endl;
	}
	cout << endl;
	system("pause");

	cout << "Do you want to export the data to a file? (y/n): ";
	cin >> option;

	if (option == 'y') {
		std::ofstream out("ListGroups.txt");
		for (int i = 0; i < GroupVector.size(); i++) {
			out << GroupVector[i].getname() + "\n";
		}
		out.close();
		cout << "Done!\n";
		system("pause");
	}
	
}

void Shop::listCustomers(){
	char option;

	system("cls");
	for (int i = 0; i < PCustomerVector.size(); i++) {
		cout << i << "- ";
		PCustomerVector[i].ShowInfo();
	}

	for (int i = 0; i < CCustomerVector.size(); i++) {
		cout << i << "- ";
		CCustomerVector[i].ShowInfo();
	}
	cout << endl;
	system("pause");

	cout << "Do you want to export the data to a file? (y/n): ";
	cin >> option;

	if (option == 'y') {
		std::ofstream out("ListCustomers.txt");
		for (int i = 0; i < PCustomerVector.size(); i++) {
			out << PCustomerVector[i].getName() + "\n";
		}
		for (int i = 0; i < CCustomerVector.size(); i++) {
			out << CCustomerVector[i].getName() + "\n";
		}
		out.close();
		cout << "Done!\n";
		system("pause");
	}
}

void Shop::listProducts(int GroupNumber) {
	GroupVector[GroupNumber].listProducts();
}

void Shop::searchByName(string SearchTarget) {
	bool found = false;
	int iterator = 0;
	int iteratorAux = 0;
	Product auxProduct;

	while (found == false && iterator < GroupVector.size()) {
		iteratorAux = 0;
		while (found == false && iteratorAux < GroupVector[iterator].getProductVector().size()) {
			auxProduct = GroupVector[iterator].getProductVector()[iteratorAux];
			if (SearchTarget == auxProduct.getName()) {
				found = true;
				cout << "Item found!\n";
				cout << "Product Group: " << GroupVector[iterator].getname() << endl;
				system("pause");
			}
			else {
				iteratorAux++;
			}
				
		}
		iterator++;
	}

	if (found == false) {
		cout << "Item not found\n";
		system("pause");
	}	
}

void Shop::modifyProduct(int GroupNum, int ProductNum) {
	if (GroupVector[GroupNum].getProductVector().size() <= 0 ||
		ProductNum > GroupVector[GroupNum].getProductVector().size() - 1) {
		cout << "Error. The product does not exist. \n";
		system("pause");
	}
	else {
		string auxString;
		int auxInt;
		float auxFloat;

		cout << "Please, insert the name of the product: ";
		cin.ignore();
		getline(cin, auxString);
		GroupVector[GroupNum].getProductVector()[ProductNum].setName(auxString);

		cout << "Please, insert the description of the product: ";
		cin.ignore();
		getline(cin, auxString);
		GroupVector[GroupNum].getProductVector()[ProductNum].setDescription(auxString);

		cout << "Please, insert the price of the product: ";
		cin >> auxFloat;
		GroupVector[GroupNum].getProductVector()[ProductNum].setPrice(auxFloat);

		cout << "Please, insert the stock of the product: ";
		cin >> auxInt;
		GroupVector[GroupNum].getProductVector()[ProductNum].setStock(auxInt);

		cout << "Product changed! \n";
		system("pause");
		system("cls");
	}
}

void Shop::addProduct(int GroupNum) {
	string auxString;
	int auxInt;
	float auxFloat;
	Product newProduct;

	cout << "Please, insert the name of the product: ";
	cin.ignore();
	getline(cin, auxString);
	newProduct.setName(auxString);

	cout << "Please, insert the description of the product: ";
	cin.ignore();
	getline(cin, auxString);
	newProduct.setDescription(auxString);

	cout << "Please, insert the price of the product: ";
	cin >> auxFloat;
	newProduct.setPrice(auxFloat);

	cout << "Please, insert the stock of the product: ";
	cin >> auxInt;
	newProduct.setStock(auxInt);

	GroupVector[GroupNum].getProductVector().push_back(newProduct);

	cout << "Product added! \n";
	system("pause");
	system("cls");
}

void Shop::addProductPromotion(int GroupNum) {
	string auxString;
	int auxInt;
	float auxFloat;
	POffer newProduct;

	cout << "Please, insert the name of the product: ";
	cin.ignore();
	getline(cin, auxString);
	newProduct.setName(auxString);

	cout << "Please, insert the description of the product: ";
	cin.ignore();
	getline(cin, auxString);
	newProduct.setDescription(auxString);

	cout << "Please, insert the price of the product: ";
	cin >> auxFloat;
	newProduct.setPrice(auxFloat);

	cout << "Please, insert the stock of the product: ";
	cin >> auxInt;
	newProduct.setStock(auxInt);

	cout << "Please, insert the description of the promotion: ";
	cin.ignore();
	getline(cin, auxString);
	newProduct.setDescription(auxString);

	cout << "Please, insert the days remaining: ";
	cin >> auxInt;
	newProduct.setDaysRemaining(auxInt);

	GroupVector[GroupNum].getProductVector().push_back(newProduct);

	cout << "Product added! \n";
	system("pause");
	system("cls");
}

void Shop::deleteProduct(int GroupNum, int ProductNum) {
	if (GroupVector[GroupNum].getProductVector().size() <= 0 ||
		ProductNum > GroupVector[GroupNum].getProductVector().size() - 1) {
		cout << "Error. The product does not exist. \n";
		system("pause");
	}
	else {
		GroupVector[GroupNum].getProductVector().erase(GroupVector[GroupNum].getProductVector().begin()+(ProductNum));
		cout << "The product was removed. \n";
		system("pause");
	}
}

void Shop::checkQuantity(int GroupNum, int ProductNum) {
	if (GroupVector[GroupNum].getProductVector().size() <= 0 ||
		ProductNum > GroupVector[GroupNum].getProductVector().size() - 1) {
		cout << "Error. The product does not exist. \n";
		system("pause");
	}
	else {
		cout << "Name:" << GroupVector[GroupNum].getProductVector()[ProductNum].getName() << endl;
		cout << "Quantity:" <<GroupVector[GroupNum].getProductVector()[ProductNum].getStock() << endl;
		system("pause");
	}
}