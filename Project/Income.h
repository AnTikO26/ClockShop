#ifndef __INCOME_H__
#define __INCOME_H__
#include "Struct.h"
#include "Product.h"
using namespace std;

class Income // �����
{
private:
	income1* ourIncome; // ��������� �� ��������� ������
	int prIdI; // id ������� ������
public:
	Income();
	~Income();
	void addIncome(Product&, int); // �������� ������� ������
	void addStructI(int); // ��������� ������ ��� ������ ������
	void showI(); // ����� ������� �������
	void itSymm(); // ����� ����� �������
};

#endif