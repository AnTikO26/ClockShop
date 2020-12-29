#ifndef __EXPENSES_H__
#define __EXPENSES_H__
#include "Struct.h"
#include "Product.h"
using namespace std;

class Expenses // ������
{
private:
	expenses1* ourExpenses; // ��������� �� ��������� �������
public:
	Expenses();
	~Expenses();
	void addStructE(int); // �������� ������ ��� ������ ��������� ������
	void addExpenses(int); // ������� ������ ��������� ������
	void showE(int); // ����� ������� �������
	void purch(Product&, int&, int); // �������
	void annualReport(); // ����� �������� ������
	void dannOtch(int); // ������������ ������ ��� �������� ������
};

#endif