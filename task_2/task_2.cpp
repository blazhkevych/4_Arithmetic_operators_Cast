/*
2. Пользователь вводит с клавиатуры массу в тоннах (дробное число).
Вывести по отдельности количество тонн, килограмм, грамм (например,
ввести 126.456789т - получить и вывести 126т 456кг 789г)
*/

#include<iostream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //працює тільки з потоком виведення
	SetConsoleCP(1251); //встановлює потрібну кодову таблицю, на потік введення
	SetConsoleOutputCP(1251); //встановлює потрібну кодову таблицю, на потік виводу

	cout << "Введите массу в тоннах (дробное число): " << endl;
	double weight_in_tons = { 0.0 };
	cin >> weight_in_tons; //126.456789

	int tons = weight_in_tons; //126
	double kilogram = (weight_in_tons - tons) * 1000; //456.789
	int gram = (kilogram - (int)kilogram) * 1000; //(456.789-456)*1000=789

	cout << "Количество тонн: " << tons << endl;
	cout << "Количество килограмм: " << (int)kilogram << endl;
	cout << "Количество грамм: " << gram << endl;

	return 0;
}