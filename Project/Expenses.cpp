#include "Expenses.h"
#include <iostream>
#include <iomanip>
#include "Struct.h"
using namespace std;

itreport report; // Глобальный объект структуры
Expenses::Expenses() // Конструктор
{
	ourExpenses = 0; // Присваивает указателю на структуру нулевое значение
}

Expenses::~Expenses() // Деструктор
{
	delete[] ourExpenses;
}
void Expenses::addStructE(int amount) // Выделение памяти под объект структуры
{
	if (amount == 0)
	{
		ourExpenses = new expenses1[amount + 1]; // выделение памяти для первой структуры
	}
	else
	{
		expenses1* tempObjE = new expenses1[amount + 1];
		for (int i = 0; i < amount; i++)
		{
			tempObjE[i] = ourExpenses[i]; // копируем во временный объект
		}
		delete[] ourExpenses;

		ourExpenses = tempObjE;
	}
}
void Expenses::addExpenses(int amount) // Добавление данных в объект структуры
{
	int date;
	int categ;
	cout << "Месяц:" << endl;
	cout << "1. Январь" << endl;
	cout << "2. Февраль" << endl;
	cout << "3. Март" << endl;
	cout << "4. Апрель" << endl;
	cout << "5. Май" << endl;
	cout << "6. Июнь" << endl;
	cout << "7. Июль" << endl;
	cout << "8. Август" << endl;
	cout << "9. Сентябрь" << endl;
	cout << "10. Октябрь" << endl;
	cout << "11. Ноябрь" << endl;
	cout << "12. Декабрь" << endl;
	cout << "Выберите месяц: ";
	cin >> date;
	switch (date)
	{
	case 1:
	{
			  ourExpenses[amount].data = "Январь";
			  break;
	}
	case 2:
	{
			  ourExpenses[amount].data = "Февраль";
			  break;
	}
	case 3:
	{
			  ourExpenses[amount].data = "Март";
			  break;
	}
	case 4:
	{
			  ourExpenses[amount].data = "Апрель";
			  break;
	}
	case 5:
	{
			  ourExpenses[amount].data = "Май";
			  break;
	}
	case 6:
	{
			  ourExpenses[amount].data = "Июнь";
			  break;
	}
	case 7:
	{
			  ourExpenses[amount].data = "Июль";
			  break;
	}
	case 8:
	{
			  ourExpenses[amount].data = "Август";
			  break;
	}
	case 9:
	{
			  ourExpenses[amount].data = "Сентябрь";
			  break;
	}
	case 10:
	{
			   ourExpenses[amount].data = "Октябрь";
			   break;
	}
	case 11:
	{
			   ourExpenses[amount].data = "Ноябрь";
			   break;
	}
	case 12:
	{
			   ourExpenses[amount].data = "Декабрь";
			   break;
	}
		system("pause");
	default:
		cout << "Месяц не найден" << endl;
		return;
		break;

	}
	cout << endl;

	cout << "Введите получателя: ";
	cin >> ourExpenses[amount].recipient;
	cout << "Введите сумму расхода: ";
	cin >> ourExpenses[amount].symm;
	cout << "Выберите категорию: " << endl;
	cout << "1. ЖКХ" << endl;
	cout << "2. Налог на недвижимость" << endl;
	cout << "3. Страховка" << endl;
	cout << "4. Принадлежности" << endl;
	cout << "5. Ремонт" << endl;
	cout << "6. Реклама" << endl;
	cout << "Введите номер категорию: ";
	cin >> categ;

	switch (categ)
	{
	case 1:
	{
			  ourExpenses[amount].categories = "ЖКХ";
			  break;
	}
	case 2:
	{
			  ourExpenses[amount].categories = "Налог на недвижимость";
			  break;
	}
	case 3:
	{
			  ourExpenses[amount].categories = "Страховка";
			  break;
	}
	case 4:
	{
			  ourExpenses[amount].categories = "Принадлежности";
			  break;
	}
	case 5:
	{
			  ourExpenses[amount].categories = "Ремонт";
			  break;
	}
	case 6:
	{
			  ourExpenses[amount].categories = "Реклама";
			  break;
	}
		system("pause");
	default:
		cout << "Категория не найдена" << endl;
		break;

	}
}
