# include <iostream>
# include <stdlib.h>
# include <string.h>
# include <time.h>
#include<windows.h>

using namespace std;

struct TRAIN
{
	char item[15];
	int number;
	char time[6];
};

void zap(TRAIN *tr, int count)
{


	cout << "------ ���������� ��� " << count++ << " ������ ----------------------" << endl;
	cout << "������� ����� ���������� : ";
	cin >> tr->item;
	cout << "������� ����� ������ : ";
	cin >> tr->number;
	cout << "������� ����� ��������  ( �� : �� )  : ";
	cin >> tr->time;
	cout << "----------------------------" << endl;

}

void sort(TRAIN *tr, int &n)
{
	TRAIN p;

	cout << "��������� �� ������� ������� �����������" << endl;

	for (int j = 0; j<(n - 1); j++)
	{
		if (tr[j].number>tr[j + 1].number)
		{
			p = *(tr + j);
			*(tr + j) = *(tr + j + 1);
			*(tr + j + 1) = p;
		}

	}
}