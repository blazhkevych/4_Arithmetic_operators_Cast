/*
1. Пользователь вводит с клавиатуры два дробных числа.
Вывести на экран сумму целых частей и сумму дробных.
*/

#include<iostream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //працює тільки з потоком виведення
	SetConsoleCP(1251); //встановлює потрібну кодову таблицю, на потік введення
	SetConsoleOutputCP(1251); //встановлює потрібну кодову таблицю, на потік виводу

	cout << "Введите первое дробное число: " << endl;
	double number1{ 0 }, number2{ 0 };
	cin >> number1;

	cout << "Введите второе дробное число: " << endl;
	cin >> number2;

	int first_part_number1 = number1;
	double second_part_number1 = number1 - first_part_number1;
	//cout << first_part_number1 << endl;
	//cout << second_part_number1 << endl;

	int first_part_number2 = number2;
	double second_part_number2 = number2 - first_part_number2;
	//cout << first_part_number2 << endl;
	//cout << second_part_number2 << endl;

	cout << "Сумма целых частей: " << first_part_number1 + first_part_number2 << endl;
	cout << "Сумма дробных частей: " << second_part_number1 + second_part_number2 << endl;

	return 0;
}