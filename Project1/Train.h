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


	cout << "------ Информация для " << count++ << " поезда ----------------------" << endl;
	cout << "Введите пункт назначения : ";
	cin >> tr->item;
	cout << "Введите номер поезда : ";
	cin >> tr->number;
	cout << "Введите время прибытия  ( ЧЧ : ММ )  : ";
	cin >> tr->time;
	cout << "----------------------------" << endl;

}

void sort(TRAIN *tr, int &n)
{
	TRAIN p;

	cout << "Сортирока по номерам поездов произведена" << endl;

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