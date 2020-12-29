#ifndef __EXPENSES_H__
#define __EXPENSES_H__
#include "Struct.h"
#include "Product.h"
using namespace std;

class Expenses // Расход
{
private:
	expenses1* ourExpenses; // Указатель на структуру расходы
public:
	Expenses();
	~Expenses();
	void addStructE(int); // Выделить память под объект структуры товара
	void addExpenses(int); // Создать объект структуры товара
	void showE(int); // Вывод таблицы расходы
	void purch(Product&, int&, int); // Закупки
	void annualReport(); // Вывод годового отчета
	void dannOtch(int); // Формирование данных для годового отчета
};

#endif