/*
1. ������������ ������ � ���������� ��� ������� �����.
������� �� ����� ����� ����� ������ � ����� �������.
*/

#include<iostream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //������ ����� � ������� ���������
	SetConsoleCP(1251); //���������� ������� ������ �������, �� ���� ��������
	SetConsoleOutputCP(1251); //���������� ������� ������ �������, �� ���� ������

	cout << "������� ������ ������� �����: " << endl;
	double number1{ 0 }, number2{ 0 };
	cin >> number1;

	cout << "������� ������ ������� �����: " << endl;
	cin >> number2;

	int first_part_number1 = number1;
	double second_part_number1 = number1 - first_part_number1;
	//cout << first_part_number1 << endl;
	//cout << second_part_number1 << endl;

	int first_part_number2 = number2;
	double second_part_number2 = number2 - first_part_number2;
	//cout << first_part_number2 << endl;
	//cout << second_part_number2 << endl;

	cout << "����� ����� ������: " << first_part_number1 + first_part_number2 << endl;
	cout << "����� ������� ������: " << second_part_number1 + second_part_number2 << endl;

	return 0;
}