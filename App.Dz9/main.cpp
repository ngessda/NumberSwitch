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
	cout << "Значение первой переменной: ";
	cin >> valueOne;
	cout << "Значение второй переменной: ";
	cin >> valueTwo;

	cout << "Первое значение: " << valueOne << endl;
	cout << "Второе значение: " << valueTwo << endl;

	cout << "==================================================================" << endl;
	NumberSwitch(&valueOne, &valueTwo);

	cout << "Результат: " << endl << "Первое значение: " << valueOne << endl << "Второе значение: " << valueTwo << endl;

}