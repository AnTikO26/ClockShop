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

void Product::ostatkiP(int amount) // Сумма остатков товара
{
	ostatki = 0;
	for (int i = 0; i < amount; i++)
	{
		ostatki = ostatki + (ourProduct[i].kolvo * ourProduct[i].price);
	}
}


void Product::copyProd(int amount) // Копирование данных основного объекта структуры во временный
{
	ourProduct1 = new product1[amount];
	for (int i = 0; i < amount; i++)
	{
		ourProduct1[i].id = ourProduct[i].id;
		ourProduct1[i].name = ourProduct[i].name;
		ourProduct1[i].vid = ourProduct[i].vid;
		ourProduct1[i].kolvo = ourProduct[i].kolvo;
		ourProduct1[i].price = ourProduct[i].price;

	}
}

void Product::recopyProd(int amount) // Копируем измененные данные временного объекта структуры в основной объект структуры
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

void Product::addStructPr1(int amount) // Выделение памяти под временный объект структуры
{
	if (amount == 0)
	{
		ourProduct1 = new product1[amount + 1]; // выделение памяти для первой структуры
		ourProduct1[amount].id = 0;
	}
	else
	{
		product1* tempObjEx = new product1[amount + 1];
		for (int i = 0; i < amount; i++)
		{
			tempObjEx[i] = ourProduct1[i]; // копируем во временный объект
		}
		delete[] ourProduct1;

		ourProduct1 = tempObjEx;
		prId++;
		ourProduct1[amount].id = prId;

	}
}

void Product::addStruct(int amount) // Выделение памяти под основной объект структуры
{
	if (amount == 0)
	{
		ourProduct = new product1[amount + 1]; // выделение памяти для первой структуры
		ourProduct[amount].id = 0;
	}
	else
	{
		product1* tempObj = new product1[amount + 1];
		for (int i = 0; i < amount; i++)
		{
			tempObj[i] = ourProduct[i]; // копируем во временный объект
		}
		delete[] ourProduct;

		ourProduct = tempObj;
		prId++;
		ourProduct[amount].id = prId;
	}
}

void Product::addProduct(int amount) // Заполняем объект структуры
{
	cout << "Введите название товара: ";
	cin >> ourProduct[amount].name;
	cout << endl;
	cout << "Введите вид товара: ";
	cin >> ourProduct[amount].vid;
	cout << endl;
	cout << "Введите количество товарв: ";
	cin >> ourProduct[amount].kolvo;
	cout << endl;
	cout << "Введите цену товара: ";
	cin >> ourProduct[amount].price;

}


void Product::showP(int amount) // Вывод объектов структуры
{
	for (int i = 0; i < amount; i++)
	{
		cout
			<< "id " << ourProduct[i].id << '\n'
			<< "Наименование товара: " << ourProduct[i].name << '\n'
			<< "Вид товара: " << ourProduct[i].vid << '\n'
			<< "Количество товара: " << ourProduct[i].kolvo << '\n'
			<< "Цена товара: " << ourProduct[i].price << '\n'
			<< "=================================\n";
	}
}

void Product::editP(int amount) // Редактирование объета структуры
{
	int idred, punct;

	cout << "|---------------------------|" << endl;
	cout << "|Пункты редактирования:     |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "|1. Наименование            |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "|2. Вид                     |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "|3. Количество              |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "|4. Цена                    |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "|0. Вернуться в меню        |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "Введите пункт, который хотите отредактировать у товара: ";
	cin >> punct;

	system("cls");

	switch (punct)
	{
	case 1:
	{
			  string rename;
			  bool proverka = true;
			  showP(amount);
			  cout << "Введите id товара: ";
			  cin >> idred;
			  cout << endl;
			  for (int i = 0; i < amount; i++)
			  {
				  if (idred == ourProduct[i].id) // Существует ли товар
				  {
					  cout << "Введите новое наименование товара: ";
					  cin >> rename;
					  ourProduct[i].name = rename;
					  cout << "Наименование изменено" << endl;
					  proverka = false;
				  }
			  }
			  if (proverka == true)
			  {
				  cout << "id не найден" << endl;
			  }
			  break;
	}
	case 2:
	{
			  string revid;
			  bool proverka = true;
			  showP(amount);
			  cout << "Введите id товара: ";
			  cin >> idred;
			  cout << endl;
			  for (int i = 0; i < amount; i++)
			  {
				  if (idred == ourProduct[i].id)
				  {
					  cout << "Введите новый вид товара: ";
					  cin >> revid;
					  ourProduct[i].vid = revid;
					  cout << "Вид товара изменен" << endl;
					  proverka = false;
				  }
			  }
			  if (proverka == true)
			  {
				  cout << "id не найден" << endl;
			  }
			  break;
	}
	case 3:
	{
			  float rekolvo;
			  bool proverka = true;
			  showP(amount);
			  cout << "Введите id товара: ";
			  cin >> idred;
			  cout << endl;
			  for (int i = 0; i < amount; i++)
			  {
				  if (idred == ourProduct[i].id)
				  {
					  cout << "Введите новое количество товара: ";
					  cin >> rekolvo;
					  ourProduct[i].kolvo = rekolvo;
					  cout << "Количество товара изменено" << endl;
					  proverka = false;
				  }
			  }
			  if (proverka == true)
			  {
				  cout << "id не найден" << endl;
			  }
			  break;
	}
	case 4:
	{
			  float reprice;
			  bool proverka = true;
			  showP(amount);
			  cout << "Введите id товара: ";
			  cin >> idred;
			  cout << endl;
			  for (int i = 0; i < amount; i++)
			  {
				  if (idred == ourProduct[i].id)
				  {
					  cout << "Введите новую цену товара: ";
					  cin >> reprice;
					  ourProduct[i].price = reprice;
					  cout << "Цена товара изменена" << endl;
					  proverka = false;
				  }
			  }
			  if (proverka == true)
			  {
				  cout << "id не найден" << endl;
			  }
			  break;
	}

		system("pause");
	default:
		cout << "Такого действия не существует" << endl;
		break;
	}

}

	

