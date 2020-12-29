#include "Income.h"
#include <iostream>
#include <iomanip>
#include "Struct.h"
using namespace std;

float insymm;

Income::Income() // Конструктор
{
	ourIncome = 0; // Присваиваем указателю на структуру нулевое значение
	prIdI = 0;
}

Income::~Income()
{
	delete[] ourIncome;
}


void Income::addStructI(int amount) // Выделяем память под объект структуры
{
	ourIncome = new income1[amount + 1]; // выделение памяти для первой структуры
}

void Income::addIncome(Product &objectPr, int amount) // Заполнение объекта структуры
{

	int mes, idtov;
	float kolvotov;
	float symm;
	bool proverka = true;
	objectPr.showP(amount);
	cout << "Введите id товара: ";
	cin >> idtov;
	cout << "Введите количество товара: ";
	cin >> kolvotov;
	for (int i = 0; i < amount; i++)
	{
		if (idtov == objectPr.ourProduct1[i].id) // Существует ли такой товар
		{
			if (kolvotov > objectPr.ourProduct1[i].kolvo) // Хватает ли количества товаров
			{
				cout << "Недостаточно товара" << endl;
				return;
			}
			else {
				objectPr.ourProduct1[i].kolvo = objectPr.ourProduct1[i].kolvo - kolvotov; // Изменение количества товара
				symm = kolvotov * objectPr.ourProduct1[i].price; // Авторасчет суммы продаваемого товара
				cout << "Сумма дохода: " << symm << endl;
				proverka = false;

				cout << endl;
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
				cin >> mes;

				switch (mes)
				{
				case 1:
				{
						  ourIncome[prIdI].Jan = symm + ourIncome[prIdI].Jan;
						  break;
				}
				case 2:
				{
						  ourIncome[prIdI].Feb = symm + ourIncome[prIdI].Feb;
						  break;
				}
				case 3:
				{
						  ourIncome[prIdI].Mar = symm + ourIncome[prIdI].Mar;
						  break;
				}
				case 4:
				{
						  ourIncome[prIdI].Apr = symm + ourIncome[prIdI].Apr;
						  break;
				}
				case 5:
				{
						  ourIncome[prIdI].May = symm + ourIncome[prIdI].May;
						  break;
				}
				case 6:
				{
						  ourIncome[prIdI].Jun = symm + ourIncome[prIdI].Jun;
						  break;
				}
				case 7:
				{
						  ourIncome[prIdI].Jul = symm + ourIncome[prIdI].Jul;
						  break;
				}
				case 8:
				{
						  ourIncome[prIdI].Aug = symm + ourIncome[prIdI].Aug;
						  break;
				}
				case 9:
				{
						  ourIncome[prIdI].Sep = symm + ourIncome[prIdI].Sep;
						  break;
				}
				case 10:
				{
						   ourIncome[prIdI].Oct = symm + ourIncome[prIdI].Oct;
						   break;
				}
				case 11:
				{
						   ourIncome[prIdI].Nov = symm + ourIncome[prIdI].Nov;
						   break;
				}
				case 12:
				{
						   ourIncome[prIdI].Dec = symm + ourIncome[prIdI].Dec;
						   break;
				}
					system("pause");
				default:
					cout << "Месяц не найден" << endl;
					break;

				}
			}
		}
	}

	if (proverka == true)
	{
		cout << "id товара не найден" << endl;
	}
}

void Income::showI() // Вывод таблицы доходов
{
	cout << setw(10) << "Jan" << setw(10) << "Feb" << setw(10) << "Mar" << setw(10) << "Apr" << setw(10) << "May" << setw(10) << "Jun" << setw(10) << "Jul" << setw(10) << "Aug" << setw(10) << "Sep" << setw(10) << "Oct" << setw(10) << "Nov" << setw(10) << "Dec" << endl;
	cout << endl;
	cout << endl;
	cout << setw(10) << ourIncome[prIdI].Jan << setw(10) << ourIncome[prIdI].Feb << setw(10) << ourIncome[prIdI].Mar << setw(10) << ourIncome[prIdI].Apr << setw(10) << ourIncome[prIdI].May << setw(10) << ourIncome[prIdI].Jun << setw(10) << ourIncome[prIdI].Jul << setw(10) << ourIncome[prIdI].Aug << setw(10) << ourIncome[prIdI].Sep << setw(10) << ourIncome[prIdI].Oct << setw(10) << ourIncome[prIdI].Nov << setw(10) << ourIncome[prIdI].Dec << endl;
}

void Income::itSymm() // Общая сумма доходов
{
	insymm = 0;
	insymm = ourIncome[prIdI].Jan + ourIncome[prIdI].Feb + ourIncome[prIdI].Mar + ourIncome[prIdI].Apr + ourIncome[prIdI].May + ourIncome[prIdI].Jun + ourIncome[prIdI].Jul + ourIncome[prIdI].Aug + ourIncome[prIdI].Sep + ourIncome[prIdI].Oct + ourIncome[prIdI].Nov + ourIncome[prIdI].Dec;
}