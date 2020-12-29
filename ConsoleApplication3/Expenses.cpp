#include "Expenses.h"
#include <iostream>
#include <iomanip>
#include "Struct.h"
using namespace std;

itreport report; // ���������� ������ ���������
extern float insymm; // ���������� ���������� ����� ����� �������
extern float ostatki; // ���������� ���������� ������� �������

void Expenses::dannOtch(int amountEx) // ���������� ������� ��������� ������ ����� ��������� �������
{
	report.JKX = 0;
	report.remont = 0;
	report.reklama = 0;
	report.straxovka = 0;
	report.nalog = 0;
	report.prinadlej = 0;
	report.zakyp = 0;
	for (int i = 0; i < amountEx; i++)
	{
		if (ourExpenses[i].categories == "���")
		{
			report.JKX = ourExpenses[i].symm + report.JKX;
		}
		if (ourExpenses[i].categories == "������")
		{
			report.remont = ourExpenses[i].symm + report.remont;
		}
		if (ourExpenses[i].categories == "�������")
		{
			report.reklama = ourExpenses[i].symm + report.reklama;
		}
		if (ourExpenses[i].categories == "���������")
		{
			report.straxovka = ourExpenses[i].symm + report.straxovka;
		}
		if (ourExpenses[i].categories == "����� �� ������������")
		{
			report.nalog = ourExpenses[i].symm + report.nalog;
		}
		if (ourExpenses[i].categories == "��������������")
		{
			report.prinadlej = ourExpenses[i].symm + report.prinadlej;
		}
		if (ourExpenses[i].categories == "�������")
		{
			report.zakyp = ourExpenses[i].symm + report.zakyp;
		}

		report.symmaP = report.JKX + report.remont + report.reklama + report.straxovka + report.nalog + report.prinadlej;
	}
}

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


void Expenses::showE(int amount) // ����� ������� ��������
{
	cout << setw(10) << "����� " << setw(25) << "����������" << setw(25) << "�����" << setw(25) << "���������" << endl;
	cout << "--------------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < amount; i++)
	{
		cout << setw(10) << ourExpenses[i].data << setw(25) << ourExpenses[i].recipient << setw(25) << ourExpenses[i].symm << setw(25) << ourExpenses[i].categories << endl;
		cout << "--------------------------------------------------------------------------------------" << endl;
	}
}

void Expenses::purch(Product& objectPr, int& amountPr, int amountEx) // ������� �������
{
	string pName;
	int pKolvo;
	int date;
	bool proverka = true;
	cout << "������� �������� ������: ";
	cin >> pName; 
	for (int i = 0; i < amountPr; i++)
	{
		if (pName == objectPr.ourProduct1[i].name) // ��������, ���������� �� �����
		{
			cout << "������� ����������: ";
			cin >> pKolvo;
			objectPr.ourProduct1[i].kolvo = objectPr.ourProduct1[i].kolvo + pKolvo; // ��������� ���������� �������
			proverka = false;
		}
	}
	if (proverka == true) // ���� ���������� proverka = true, ������, ��� ������ ��� � �� ������� �����
	{
		objectPr.addStructPr1(amountPr); // ��������� ������ ��� ��������� ������ ���������
		objectPr.addStruct(amountPr); // ��������� ������ ��� �������� ������ ���������
		objectPr.ourProduct1[amountPr].name = pName;
		cout << "������� ���:  ";
		cin >> objectPr.ourProduct1[amountPr].vid;
		cout << "������� ����������: ";
		cin >> objectPr.ourProduct1[amountPr].kolvo;
		cout << "������� ���� ������ ��� �������: ";
		cin >> objectPr.ourProduct1[amountPr].price;
		amountPr++;
	}
	
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
			  ourExpenses[amountEx].data = "������";
			  break;
	}
	case 2:
	{
			  ourExpenses[amountEx].data = "�������";
			  break;
	}
	case 3:
	{
			  ourExpenses[amountEx].data = "����";
			  break;
	}
	case 4:
	{
			  ourExpenses[amountEx].data = "������";
			  break;
	}
	case 5:
	{
			  ourExpenses[amountEx].data = "���";
			  break;
	}
	case 6:
	{
			  ourExpenses[amountEx].data = "����";
			  break;
	}
	case 7:
	{
			  ourExpenses[amountEx].data = "����";
			  break;
	}
	case 8:
	{
			  ourExpenses[amountEx].data = "������";
			  break;
	}
	case 9:
	{
			  ourExpenses[amountEx].data = "��������";
			  break;
	}
	case 10:
	{
			   ourExpenses[amountEx].data = "�������";
			   break;
	}
	case 11:
	{
			   ourExpenses[amountEx].data = "������";
			   break;
	}
	case 12:
	{
			   ourExpenses[amountEx].data = "�������";
			   break;
	}
		system("pause");
	default:
		cout << "����� �� ������" << endl;
		break;

	}
	cout << endl;

	cout << "������� ����������: ";
	cin >> ourExpenses[amountEx].recipient;
	cout << "������� ����� �������: ";
	cin >> ourExpenses[amountEx].symm;
	ourExpenses[amountEx].categories = "�������";
	
}

void Expenses::annualReport() // ����� �������� ������
{
	cout << "������" << endl;
	cout << "	���: " << report.JKX << endl;
	cout << "	������: " << report.remont << endl;
	cout << "	�������: " << report.reklama << endl;
	cout << "	���������: " << report.straxovka << endl;
	cout << "	����� �� ������������: " << report.nalog << endl;
	cout << "	��������������: " << report.prinadlej << endl;
	cout << "	�����: " << report.symmaP << endl;
	cout << "�����" << endl;
	cout << "	�����: " << insymm << endl;
	cout << "�������" << endl;
	cout << "	�����: " << ostatki << endl;

}