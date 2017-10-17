#include "Group.h"
#include <fstream>

Group::Group()
{
	Product a, b;
	POffer c;
	a.setName("Product 1");
	a.setDescription("Description 1");
	a.setPrice(100);
	a.setStock(10);

	b.setName("Product 2");
	b.setDescription("Description 2");
	b.setPrice(200);
	b.setStock(20);

	c.setName("Product with Promotion 1");
	c.setDescription("Description 3");
	c.setPrice(100);
	c.setStock(10);

	ProductVector.push_back(a);
	ProductVector.push_back(b);
	ProductVector.push_back(c);
}


Group::~Group()
{
}

string Group::getname() {
	return name;
}

void Group::setname(string name) {
	this->name = name;
}

void Group::listProducts() {
	char option;

	system("cls");
	cout << "Products in this group - " << getname() << endl << endl;
	cout << "ID - NAME - PRICE - DESCRIPTION" << endl;
	for (int i = 0; i < ProductVector.size(); i++) {
		cout << i << "- " << ProductVector[i].getName() << " - " << ProductVector[i] .getPrice() 
			<< " - " << ProductVector[i].getDescription() << endl;
	}
	cout << endl;
	system("pause");

	cout << "Do you want to export the data to a file? (y/n): ";
	cin >> option;

	if (option == 'y') {
		std::ofstream out("ListProducts.txt");
		for (int i = 0; i < ProductVector.size(); i++) {
			out << ProductVector[i].getName() + "\n";
		}
		out.close();
	}
}
