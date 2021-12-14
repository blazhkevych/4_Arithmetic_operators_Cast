/*
2. ������������ ������ � ���������� ����� � ������ (������� �����).
������� �� ����������� ���������� ����, ���������, ����� (��������,
������ 126.456789� - �������� � ������� 126� 456�� 789�)
*/

#include<iostream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //������ ����� � ������� ���������
	SetConsoleCP(1251); //���������� ������� ������ �������, �� ���� ��������
	SetConsoleOutputCP(1251); //���������� ������� ������ �������, �� ���� ������

	cout << "������� ����� � ������ (������� �����): " << endl;
	double weight_in_tons = { 0.0 };
	cin >> weight_in_tons; //126.456789

	int tons = weight_in_tons; //126
	double kilogram = (weight_in_tons - tons) * 1000; //456.789
	int gram = (kilogram - (int)kilogram) * 1000; //(456.789-456)*1000=789

	cout << "���������� ����: " << tons << endl;
	cout << "���������� ���������: " << (int)kilogram << endl;
	cout << "���������� �����: " << gram << endl;

	return 0;
}