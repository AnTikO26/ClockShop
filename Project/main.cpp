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
	Product objectPr; // ������� ������ ������ Product
	Income objectIn; // ������� ������ ������ Income
	Expenses objectEx; // ������� ������ ������ Expenses
	int productAmount = 0; // ����������� ���������� ������ 
	int incomeAmount = 0;
	int expensesAmount = 0;
	objectIn.addStructI(incomeAmount);

	do{ // ���� ���� ���������
		menu(); // ����� �������, ���������� ������ ��������� ���� ���������
		cin >> a;
		system("cls"); // ������� ������

		switch (a)
		{
		case  1:
		{
				   objectPr.addStruct(productAmount); // ����� ������ ������� ������ Product
				   objectPr.addProduct(productAmount);
				   productAmount++;
				   break;
		}

		case  2:
			objectEx.addStructE(expensesAmount);  //����� ������ ������� ������ Expenses
			objectEx.addExpenses(expensesAmount);
			expensesAmount++;
			break;
		case  3:
			objectPr.copyProd(productAmount);
			objectIn.addIncome(objectPr, productAmount); //����� ������ ������� ������ Income
			objectPr.recopyProd(productAmount);
			break;
		case  4:

			break;
		case  5:
		{

		default:
			cout << "����� �������� �� ����������" << endl;
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
			cout << "����� �������� �� ����������" << endl;
			break;
		}
		system("pause");
		system("cls");
	} while (a != 0); // ������� ������ �� �����

	return 0;
}

