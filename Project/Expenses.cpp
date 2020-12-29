#include "Expenses.h"
#include <iostream>
#include <iomanip>
#include "Struct.h"
using namespace std;

itreport report; // ���������� ������ ���������
Expenses::Expenses() // �����������
{
	ourExpenses = 0; // ����������� ��������� �� ��������� ������� ��������
}

Expenses::~Expenses() // ����������
{
	delete[] ourExpenses;
}
void Expenses::addStructE(int amount) // ��������� ������ ��� ������ ���������
{
	if (amount == 0)
	{
		ourExpenses = new expenses1[amount + 1]; // ��������� ������ ��� ������ ���������
	}
	else
	{
		expenses1* tempObjE = new expenses1[amount + 1];
		for (int i = 0; i < amount; i++)
		{
			tempObjE[i] = ourExpenses[i]; // �������� �� ��������� ������
		}
		delete[] ourExpenses;

		ourExpenses = tempObjE;
	}
}
void Expenses::addExpenses(int amount) // ���������� ������ � ������ ���������
{
	int date;
	int categ;
	cout << "�����:" << endl;
	cout << "1. ������" << endl;
	cout << "2. �������" << endl;
	cout << "3. ����" << endl;
	cout << "4. ������" << endl;
	cout << "5. ���" << endl;
	cout << "6. ����" << endl;
	cout << "7. ����" << endl;
	cout << "8. ������" << endl;
	cout << "9. ��������" << endl;
	cout << "10. �������" << endl;
	cout << "11. ������" << endl;
	cout << "12. �������" << endl;
	cout << "�������� �����: ";
	cin >> date;
	switch (date)
	{
	case 1:
	{
			  ourExpenses[amount].data = "������";
			  break;
	}
	case 2:
	{
			  ourExpenses[amount].data = "�������";
			  break;
	}
	case 3:
	{
			  ourExpenses[amount].data = "����";
			  break;
	}
	case 4:
	{
			  ourExpenses[amount].data = "������";
			  break;
	}
	case 5:
	{
			  ourExpenses[amount].data = "���";
			  break;
	}
	case 6:
	{
			  ourExpenses[amount].data = "����";
			  break;
	}
	case 7:
	{
			  ourExpenses[amount].data = "����";
			  break;
	}
	case 8:
	{
			  ourExpenses[amount].data = "������";
			  break;
	}
	case 9:
	{
			  ourExpenses[amount].data = "��������";
			  break;
	}
	case 10:
	{
			   ourExpenses[amount].data = "�������";
			   break;
	}
	case 11:
	{
			   ourExpenses[amount].data = "������";
			   break;
	}
	case 12:
	{
			   ourExpenses[amount].data = "�������";
			   break;
	}
		system("pause");
	default:
		cout << "����� �� ������" << endl;
		return;
		break;

	}
	cout << endl;

	cout << "������� ����������: ";
	cin >> ourExpenses[amount].recipient;
	cout << "������� ����� �������: ";
	cin >> ourExpenses[amount].symm;
	cout << "�������� ���������: " << endl;
	cout << "1. ���" << endl;
	cout << "2. ����� �� ������������" << endl;
	cout << "3. ���������" << endl;
	cout << "4. ��������������" << endl;
	cout << "5. ������" << endl;
	cout << "6. �������" << endl;
	cout << "������� ����� ���������: ";
	cin >> categ;

	switch (categ)
	{
	case 1:
	{
			  ourExpenses[amount].categories = "���";
			  break;
	}
	case 2:
	{
			  ourExpenses[amount].categories = "����� �� ������������";
			  break;
	}
	case 3:
	{
			  ourExpenses[amount].categories = "���������";
			  break;
	}
	case 4:
	{
			  ourExpenses[amount].categories = "��������������";
			  break;
	}
	case 5:
	{
			  ourExpenses[amount].categories = "������";
			  break;
	}
	case 6:
	{
			  ourExpenses[amount].categories = "�������";
			  break;
	}
		system("pause");
	default:
		cout << "��������� �� �������" << endl;
		break;

	}
}
