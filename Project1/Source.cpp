#include "Train.h"
void main()
{
	TRAIN inf[2];
	int count;
	int n = 2;
	int i;
	int nom;
	bool flag = false;
	char otv[3];
	char otv1[3];
	char zn[3] = "да";

	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	count = 0;

	while (count<n)
		zap(&inf[count++], count);

	cout << "Введите номер поезда для которого вы хотите получить информацию : ";
	cin >> nom;
	for (i = 0;i<2;i++)

		if (inf[i].number == nom)
		{
			flag = true;
			cout << "----------------------------" << endl;
			cout << "Пункт назнаения : " << inf[i].item << endl;
			cout << "Номер поезда : " << inf[i].number << endl;
			cout << "Время прибытия : " << inf[i].time << endl;
			cout << "----------------------------" << endl;
		}
	if (flag == false)
		cout << "Информации по вашему запросу не найдено!" << endl;
	cout << "Хотите ли произвести сортировку базы по номеру поезда\nда/нет" << endl;
	cin >> otv;
	if (*otv == *zn)
	{
		sort(inf, n);
		for (i = 0;i<2;i++)
		{
			cout << "----------------------------" << endl;
			cout << "Пункт назнаения : " << inf[i].item << endl;
			cout << "Номер поезда : " << inf[i].number << endl;
			cout << "Время прибытия : " << inf[i].time << endl;
			cout << "----------------------------" << endl;
		}
	}
	else
		cout << "Вывести на информацию о поездах?" << endl;
	cin >> otv1;


	if (*otv1 == *zn)
		for (i = 0;i<2;i++)
		{
			cout << "----------------------------" << endl;
			cout << "Пункт назнаения : " << inf[i].item << endl;
			cout << "Номер поезда : " << inf[i].number << endl;
			cout << "Время прибытия : " << inf[i].time << endl;
			cout << "----------------------------" << endl;
		}

}