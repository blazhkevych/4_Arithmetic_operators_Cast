/*
3. Пользователь вводит с клавиатуры время начала и время завершения
телефонного разговора (часы, минуты и секунды). Посчитать стоимость
разговора, если стоимость минуты составляет 30 копеек.
*/

#include<iostream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //працює тільки з потоком виведення
	SetConsoleCP(1251); //встановлює потрібну кодову таблицю, на потік введення
	SetConsoleOutputCP(1251); //встановлює потрібну кодову таблицю, на потік виводу

	cout << "Введите время начала разговора (в формате часы, минуты и секунды, например \"145512\"):" << endl;
	int start_of_conversation{ 0 };
	cin >> start_of_conversation; //145512

	int start_of_conversation_h = start_of_conversation / 10000; //145512/10000=14
	int start_of_conversation_m = (start_of_conversation - (start_of_conversation_h * 10000)) / 100; //(145512-(14*10000))/100=55
	int start_of_conversation_s = start_of_conversation % 100; //145512%100=12

	cout << "Введите время окончания разговора (в формате часы, минуты и секунды, например \"152056\"):" << endl;
	int end_of_conversation{ 0 };
	cin >> end_of_conversation; //152056

	int end_of_conversation_h = end_of_conversation / 10000; //152056/10000=15
	int end_of_conversation_m = (end_of_conversation - (end_of_conversation_h * 10000)) / 100; //(152056(15*10000))/100=20
	int end_of_conversation_s = end_of_conversation % 100; //152056%100=56

	int call_duration_in_seconds =
		((end_of_conversation_h * 60 * 60) + (end_of_conversation_m * 60) + end_of_conversation_s)
		-
		((start_of_conversation_h * 60 * 60) + (start_of_conversation_m * 60) + start_of_conversation_s);
	//((15*60*60)+(20*60)+56)-((14*60*60)+(55*60)+12)=(54000+1200+56)-(50400+3300+12)=55256-53712=1544

	const double cost_of_a_minute = 30;
	double cost_of_a_second = cost_of_a_minute / 60.0;

	double total_cost = (call_duration_in_seconds * cost_of_a_second) / 100; //(1544*0.5)/100=7,72

	cout << "Стоимость разговора составляет: " << total_cost << " грн.";

	return 0;
}