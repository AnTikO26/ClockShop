#ifndef __PRODUCT_H__
#define __PRODUCT_H__
#include "Struct.h"
using namespace std;


class Product  // Товар
{
private:
	int prId; // id товара
	product1* ourProduct; // Указатель на структуру товары
public:
	product1* ourProduct1; // Временный указатель на структуру, который очистится 
	Product(); // Конструктор
	~Product(); // Деструктор
	void copyProd(int); // Копирование объектов во временный указатель
	void recopyProd(int); // Присваивание измененных данных объектов структур
	void addStruct(int); // Выделение памяти под объект структуры
	void addStructPr1(int); // Выделение памяти под времены объект структуры
	void addProduct(int); // Создание объекта товара
	void showP(int); // Вывод товара
	void editP(int); // Редактирование товара
	void ostatkiP(int); // Сумма остатков
};


#endif