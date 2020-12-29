#include "Expenses.h"
#include <iostream>
#include <iomanip>
#include "Struct.h"
using namespace std;

itreport report; // Глобальный объект структуры
extern float insymm; // Глобальная переменная общей суммы доходов
extern float ostatki; // Глобальная переменная остатка товаров
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
void Expenses::showE(int amount) // Вывод таблицы расходов
{
	cout << setw(10) << "Месяц " << setw(25) << "Получатель" << setw(25) << "Сумма" << setw(25) << "Категории" << endl;
	cout << "--------------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < amount; i++)
	{
		cout << setw(10) << ourExpenses[i].data << setw(25) << ourExpenses[i].recipient << setw(25) << ourExpenses[i].symm << setw(25) << ourExpenses[i].categories << endl;
		cout << "--------------------------------------------------------------------------------------" << endl;
	}
}
void Expenses::dannOtch(int amountEx) // Заполнение объекта структуры данных суммы категорий расхода
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
		if (ourExpenses[i].categories == "ЖКХ")
		{
			report.JKX = ourExpenses[i].symm + report.JKX;
		}
		if (ourExpenses[i].categories == "Ремонт")
		{
			report.remont = ourExpenses[i].symm + report.remont;
		}
		if (ourExpenses[i].categories == "Реклама")
		{
			report.reklama = ourExpenses[i].symm + report.reklama;
		}
		if (ourExpenses[i].categories == "Страховка")
		{
			report.straxovka = ourExpenses[i].symm + report.straxovka;
		}
		if (ourExpenses[i].categories == "Налог на недвижимость")
		{
			report.nalog = ourExpenses[i].symm + report.nalog;
		}
		if (ourExpenses[i].categories == "Принадлежности")
		{
			report.prinadlej = ourExpenses[i].symm + report.prinadlej;
		}
		if (ourExpenses[i].categories == "Закупки")
		{
			report.zakyp = ourExpenses[i].symm + report.zakyp;
		}

		report.symmaP = report.JKX + report.remont + report.reklama + report.straxovka + report.nalog + report.prinadlej;
	}
}
void Expenses::purch(Product& objectPr, int& amountPr, int amountEx) // Закупка товаров
{
	string pName;
	int pKolvo;
	int date;
	bool proverka = true;
	cout << "Введите название товара: ";
	cin >> pName;
	for (int i = 0; i < amountPr; i++)
	{
		if (pName == objectPr.ourProduct1[i].name) // Проверка, существует ли товар
		{
			cout << "Введите количество: ";
			cin >> pKolvo;
			objectPr.ourProduct1[i].kolvo = objectPr.ourProduct1[i].kolvo + pKolvo; // Добавляем количество товаров
			proverka = false;
		}
	}
	if (proverka == true) // Если переменная proverka = true, значит, что товара нет и мы создаем новый
	{
		objectPr.addStructPr1(amountPr); // Выделение памяти под временный объект структуры
		objectPr.addStruct(amountPr); // Выделение памяти под основной объект структуры
		objectPr.ourProduct1[amountPr].name = pName;
		cout << "Введите вид:  ";
		cin >> objectPr.ourProduct1[amountPr].vid;
		cout << "Введите количество: ";
		cin >> objectPr.ourProduct1[amountPr].kolvo;
		cout << "Введите цену товара для продажи: ";
		cin >> objectPr.ourProduct1[amountPr].price;
		amountPr++;
	}

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
			  ourExpenses[amountEx].data = "Январь";
			  break;
	}
	case 2:
	{
			  ourExpenses[amountEx].data = "Февраль";
			  break;
	}
	case 3:
	{
			  ourExpenses[amountEx].data = "Март";
			  break;
	}
	case 4:
	{
			  ourExpenses[amountEx].data = "Апрель";
			  break;
	}
	case 5:
	{
			  ourExpenses[amountEx].data = "Май";
			  break;
	}
	case 6:
	{
			  ourExpenses[amountEx].data = "Июнь";
			  break;
	}
	case 7:
	{
			  ourExpenses[amountEx].data = "Июль";
			  break;
	}
	case 8:
	{
			  ourExpenses[amountEx].data = "Август";
			  break;
	}
	case 9:
	{
			  ourExpenses[amountEx].data = "Сентябрь";
			  break;
	}
	case 10:
	{
			   ourExpenses[amountEx].data = "Октябрь";
			   break;
	}
	case 11:
	{
			   ourExpenses[amountEx].data = "Ноябрь";
			   break;
	}
	case 12:
	{
			   ourExpenses[amountEx].data = "Декабрь";
			   break;
	}
		system("pause");
	default:
		cout << "Месяц не найден" << endl;
		break;

	}
	cout << endl;

	cout << "Введите получателя: ";
	cin >> ourExpenses[amountEx].recipient;
	cout << "Введите сумму расхода: ";
	cin >> ourExpenses[amountEx].symm;
	ourExpenses[amountEx].categories = "Закупки";

}
void Expenses::annualReport() // Вывод годового отчета
{
	cout << "Расход" << endl;
	cout << "	ЖКХ: " << report.JKX << endl;
	cout << "	Ремонт: " << report.remont << endl;
	cout << "	Реклама: " << report.reklama << endl;
	cout << "	Страховка: " << report.straxovka << endl;
	cout << "	Налог на недвижимость: " << report.nalog << endl;
	cout << "	Принадлежности: " << report.prinadlej << endl;
	cout << "	Сумма: " << report.symmaP << endl;
	cout << "Доход" << endl;
	cout << "	Сумма: " << insymm << endl;
	cout << "Остатки" << endl;
	cout << "	Сумма: " << ostatki << endl;

}