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

				   break;
		}

		case  2:

			break;
		case  3:

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

			break;
		case  7:

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

