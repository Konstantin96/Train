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
	char zn[3] = "��";

	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	count = 0;

	while (count<n)
		zap(&inf[count++], count);

	cout << "������� ����� ������ ��� �������� �� ������ �������� ���������� : ";
	cin >> nom;
	for (i = 0;i<2;i++)

		if (inf[i].number == nom)
		{
			flag = true;
			cout << "----------------------------" << endl;
			cout << "����� ��������� : " << inf[i].item << endl;
			cout << "����� ������ : " << inf[i].number << endl;
			cout << "����� �������� : " << inf[i].time << endl;
			cout << "----------------------------" << endl;
		}
	if (flag == false)
		cout << "���������� �� ������ ������� �� �������!" << endl;
	cout << "������ �� ���������� ���������� ���� �� ������ ������\n��/���" << endl;
	cin >> otv;
	if (*otv == *zn)
	{
		sort(inf, n);
		for (i = 0;i<2;i++)
		{
			cout << "----------------------------" << endl;
			cout << "����� ��������� : " << inf[i].item << endl;
			cout << "����� ������ : " << inf[i].number << endl;
			cout << "����� �������� : " << inf[i].time << endl;
			cout << "----------------------------" << endl;
		}
	}
	else
		cout << "������� �� ���������� � �������?" << endl;
	cin >> otv1;


	if (*otv1 == *zn)
		for (i = 0;i<2;i++)
		{
			cout << "----------------------------" << endl;
			cout << "����� ��������� : " << inf[i].item << endl;
			cout << "����� ������ : " << inf[i].number << endl;
			cout << "����� �������� : " << inf[i].time << endl;
			cout << "----------------------------" << endl;
		}

}