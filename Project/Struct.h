#ifndef __STRUCT_H__
#define __STRUCT_H__
#include <string>

struct itreport // Структура данных категорий расходов
{
	float JKX; // ЖКХ
	float remont; // Ремонт
	float reklama; // Реклама
	float straxovka; // Страховка
	float nalog; // Налог на недвижимость
	float prinadlej; // Принадлежности
	float zakyp; // Закупка
	float symmaP; // Общая сумма доходов
};

struct product1 // Структура данных о товарах
{
	unsigned short int id;
	float kolvo; // Количество товара
	float price; // Цена товара
	string name; // Наименование товара
	string vid; // Вид товара
};

struct income1 // Структура данных о доходах
{
	float Jan = 0, Feb = 0, Mar = 0, Apr = 0, May = 0, Jun = 0, Jul = 0, Aug = 0, Sep = 0, Oct = 0, Nov = 0, Dec = 0; //Сумма по месяцам

};

struct expenses1 // Структура данных о расходах
{
	string data; // Месяц 
	string recipient; // Получатель
	float symm; // Сумма расхода
	string categories; // Категория расходов
};

#endif