#include <iostream>
using namespace std;
#include "Shop.h"

int main() {
	int option=0;
	int optionAux = 0;
	int optionAux2 = 0;
	string SearchTarget;
	Shop myShop;

	//MENU
	do {
		system("cls");
		cout << "-----      AGP STORE     -----\n";
		cout << "1. List all product groups\n";
		cout << "2. List all products in a product group\n";
		cout << "3. Search for an object with a specific name\n";
		cout << "4. Modify product information\n";
		cout << "5. Add product\n";
		cout << "6. Add product with promotion\n";
		cout << "7. Delete product\n";
		cout << "8. Give information about stock quantity of a product.\n";
		cout << "9. List all customers\n";
		cout << "10. Exit\n\n";
		cout << "Please, choose an option: ";
		cin >> option;

		switch (option) {
		case 1:
			myShop.listGroups();
			break;
		case 2:
			cout << "Please, introduce the number of the group: ";
			cin >> optionAux;
			myShop.listProducts(optionAux);
			break;
		case 3:
			cout << "Please, introduce the name of the product: ";
			cin.ignore();
			getline(cin, SearchTarget);
			myShop.searchByName(SearchTarget);
			break;
		case 4:
			cout << "Please, introduce the number of the group: ";
			cin >> optionAux;
			cout << "Please, introduce the number of the product: ";
			cin >> optionAux2;
			myShop.modifyProduct(optionAux, optionAux2);
			break;
		case 5:
			cout << "Please, introduce the number of the group you want to add the product: ";
			cin >> optionAux;
			myShop.addProduct(optionAux);
			break;
		case 6:
			cout << "Please, introduce the number of the group you want to add the product with promotion: ";
			cin >> optionAux;
			myShop.addProductPromotion(optionAux);
			break;
		case 7:
			cout << "Please, introduce the number of the group: ";
			cin >> optionAux;
			cout << "Please, introduce the number of the product: ";
			cin >> optionAux2;
			myShop.deleteProduct(optionAux, optionAux2);
			break;
		case 8:
			cout << "Please, introduce the number of the group: ";
			cin >> optionAux;
			cout << "Please, introduce the number of the product: ";
			cin >> optionAux2;
			myShop.checkQuantity(optionAux, optionAux2);
			break;
		case 9:
			myShop.listCustomers();
			break;
		case 10:
			break;
		default:
			cout << "\nError. Not valid option\n";
			system("pause");
			break;
		}
	} while (option != 10);
	return 0;
}
