#include "Product.h"
#include <iostream>
#include "Struct.h"
using namespace std;

float ostatki;

Product::Product() 
{
	ourProduct = 0;
	prId = 0;
}

Product::~Product()
{
		delete[] ourProduct;	
}

void Product::ostatkiP(int amount) // ����� �������� ������
{
	ostatki = 0;
	for (int i = 0; i < amount; i++)
	{
		ostatki = ostatki + (ourProduct[i].kolvo * ourProduct[i].price);
	}
}


void Product::copyProd(int amount) // ����������� ������ ��������� ������� ��������� �� ���������
{
	ourProduct1 = new product1[amount];
	for (int i = 0; i < amount; i++)
	{
		ourProduct1[i].id = ourProduct[i].id;
		ourProduct1[i].name= ourProduct[i].name;
		ourProduct1[i].vid = ourProduct[i].vid;
		ourProduct1[i].kolvo = ourProduct[i].kolvo;
		ourProduct1[i].price = ourProduct[i].price;

	}
}

void Product::recopyProd(int amount) // �������� ���������� ������ ���������� ������� ��������� � �������� ������ ���������
{
	for (int i = 0; i < amount; i++)
	{
		ourProduct[i].id = ourProduct1[i].id;
		ourProduct[i].name = ourProduct1[i].name;
		ourProduct[i].vid = ourProduct1[i].vid;
		ourProduct[i].kolvo = ourProduct1[i].kolvo;
		ourProduct[i].price = ourProduct1[i].price;

	}
	delete[] ourProduct1;
}

void Product::addStructPr1(int amount) // ��������� ������ ��� ��������� ������ ���������
{
	if (amount == 0)
	{
		ourProduct1 = new product1[amount + 1]; // ��������� ������ ��� ������ ���������
		ourProduct1[amount].id = 0;
	}
	else
	{
		product1* tempObjEx = new product1[amount + 1];
		for (int i = 0; i < amount; i++)
		{
			tempObjEx[i] = ourProduct1[i]; // �������� �� ��������� ������
		}
		delete[] ourProduct1;

		ourProduct1 = tempObjEx;
		prId++;
		ourProduct1[amount].id = prId;
		
	}
}

void Product::addStruct(int amount) // ��������� ������ ��� �������� ������ ���������
	{
	if (amount == 0)
		{
		ourProduct = new product1[amount + 1]; // ��������� ������ ��� ������ ���������
		ourProduct[amount].id = 0;
		}
		else
		{
			product1* tempObj = new product1[amount + 1];
			for (int i = 0; i < amount; i++)
			{
				tempObj[i] = ourProduct[i]; // �������� �� ��������� ������
			}
			delete[] ourProduct;

			ourProduct = tempObj;
			prId++;
			ourProduct[amount].id = prId;
			}
	}

	void Product::addProduct(int amount) // ��������� ������ ���������
	{
		cout << "������� �������� ������: ";
		cin >> ourProduct[amount].name;
		cout << endl;
		cout << "������� ��� ������: ";
		cin >> ourProduct[amount].vid;
		cout << endl;
		cout << "������� ���������� ������: ";
		cin >> ourProduct[amount].kolvo;
		cout << endl;
		cout << "������� ���� ������: ";
		cin >> ourProduct[amount].price;

	}


	void Product::showP(int amount) // ����� �������� ���������
	{
		for (int i = 0; i < amount; i++)
		{
			cout
				<< "id " << ourProduct[i].id << '\n'
				<< "������������ ������: " << ourProduct[i].name << '\n'
				<< "��� ������: " << ourProduct[i].vid << '\n'
				<< "���������� ������: " << ourProduct[i].kolvo << '\n'
				<< "���� ������: " << ourProduct[i].price << '\n'
				<< "=================================\n";
		}
	}

	void Product::editP(int amount) // �������������� ������ ���������
	{
		int idred, punct;
	
		cout << "|---------------------------|" << endl;
		cout << "|������ ��������������:     |" << endl;
		cout << "|---------------------------|" << endl;
		cout << "|1. ������������            |" << endl;
		cout << "|---------------------------|" << endl;
		cout << "|2. ���                     |" << endl;
		cout << "|---------------------------|" << endl;
		cout << "|3. ����������              |" << endl;
		cout << "|---------------------------|" << endl;
		cout << "|4. ����                    |" << endl;
		cout << "|---------------------------|" << endl;
		cout << "|0. ��������� � ����        |" << endl;
		cout << "|---------------------------|" << endl;
		cout << "������� �����, ������� ������ ��������������� � ������: ";
		cin >> punct;

		system("cls");

		switch (punct)
		{
		case 1:
		{		
				  string rename;
				  bool proverka = true;
				  showP(amount);
				  cout << "������� id ������: ";
				  cin >> idred;
				  cout << endl;
				  for (int i = 0; i < amount; i++)
				  {
					  if (idred == ourProduct[i].id) // ���������� �� �����
					  {
						  cout << "������� ����� ������������ ������: ";
						  cin >> rename;
						  ourProduct[i].name = rename;
						  cout << "������������ ��������" << endl;
						  proverka = false;
					  }
				  }
				  if (proverka == true) 
				  {
					  cout << "id �� ������" << endl;
				  }
				  break;
		}
		case 2:
		{
				  string revid;
				  bool proverka = true;
				  showP(amount);
				  cout << "������� id ������: ";
				  cin >> idred;
				  cout << endl;
				  for (int i = 0; i < amount; i++)
				  {
					  if (idred == ourProduct[i].id)
					  {
						  cout << "������� ����� ��� ������: ";
						  cin >> revid;
						  ourProduct[i].vid = revid;
						  cout << "��� ������ �������" << endl;
						  proverka = false;
					  }
				  }
				  if (proverka == true)
				  {
					  cout << "id �� ������" << endl;
				  }
				  break;
		}
		case 3:
		{
				  float rekolvo;
				  bool proverka = true;
				  showP(amount);
				  cout << "������� id ������: ";
				  cin >> idred;
				  cout << endl;
				  for (int i = 0; i < amount; i++)
				  {
					  if (idred == ourProduct[i].id)
					  {
						  cout << "������� ����� ���������� ������: ";
						  cin >> rekolvo;
						  ourProduct[i].kolvo = rekolvo;
						  cout << "���������� ������ ��������" << endl;
						  proverka = false;
					  }
				  }
				  if (proverka == true)
				  {
					  cout << "id �� ������" << endl;
				  }
				  break;
		}
		case 4:
		{
				  float reprice;
				  bool proverka = true;
				  showP(amount);
				  cout << "������� id ������: ";
				  cin >> idred;
				  cout << endl;
				  for (int i = 0; i < amount; i++)
				  {
					  if (idred == ourProduct[i].id)
					  {
						  cout << "������� ����� ���� ������: ";
						  cin >> reprice;
						  ourProduct[i].price = reprice;
						  cout << "���� ������ ��������" << endl;
						  proverka = false;
					  }
				  }
				  if (proverka == true)
				  {
					  cout << "id �� ������" << endl;
				  }
				  break;
		}

			system("pause");
		default:
			cout << "������ �������� �� ����������" << endl;
			break;
		}
		
	}
	

	

