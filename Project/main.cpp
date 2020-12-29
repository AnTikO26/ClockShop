#include "Product.h"
#include "Income.h"
#include "Expenses.h"
#include "function.h"
#include <iostream>
#include <windows.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a;
	Product objectPr; // Создаем объект класса Product
	Income objectIn; // Создаем объект класса Income
	Expenses objectEx; // Создаем объект класса Expenses
	int productAmount = 0; // Присваиваем количество товара 
	int incomeAmount = 0;
	int expensesAmount = 0;
	objectIn.addStructI(incomeAmount);

	do{ // Цикл меню программю
		menu(); // Вызов функции, отвечающей выводу основного меню программы
		cin >> a;
		system("cls"); // Очистка экрана

		switch (a)
		{
		case  1:
		{
				   objectPr.addStruct(productAmount); // Вызов метода объекта класса Product
				   objectPr.addProduct(productAmount);
				   productAmount++;
				   break;
		}

		case  2:
			objectEx.addStructE(expensesAmount);  //Вызов метода объекта класса Expenses
			objectEx.addExpenses(expensesAmount);
			expensesAmount++;
			break;
		case  3:
			objectPr.copyProd(productAmount);
			objectIn.addIncome(objectPr, productAmount); //Вызов метода объекта класса Income
			objectPr.recopyProd(productAmount);
			break;
		case  4:

			break;
		case  5:
		{

		default:
			cout << "Такой операции не существует" << endl;
			break;
		}

			break;
		case  6:
			objectIn.showI();
			cout << endl;
			break;
		case  7:
			objectEx.showE(expensesAmount);
			break;
		case  8:

			break;
		case  0:
			return 0;
			break;
		
		//default:
			cout << "Такой операции не существует" << endl;
			break;
		}
		system("pause");
		system("cls");
	} while (a != 0); // Условие выхода из цикла

	return 0;
}

