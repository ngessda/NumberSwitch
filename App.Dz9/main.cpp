#include <iostream>

void NumberSwitch(int* pvalueOne, int* pvalueTwo)
{
	int switcher;
	switcher = (*pvalueOne);
	(*pvalueOne) = (*pvalueTwo);
	(*pvalueTwo) = switcher;
}


void main()
{
	using namespace std;
	setlocale(LC_ALL, "rus");
	int valueOne, valueTwo;
	cout << "�������� ������ ����������: ";
	cin >> valueOne;
	cout << "�������� ������ ����������: ";
	cin >> valueTwo;

	cout << "������ ��������: " << valueOne << endl;
	cout << "������ ��������: " << valueTwo << endl;

	cout << "==================================================================" << endl;
	NumberSwitch(&valueOne, &valueTwo);

	cout << "���������: " << endl << "������ ��������: " << valueOne << endl << "������ ��������: " << valueTwo << endl;

}