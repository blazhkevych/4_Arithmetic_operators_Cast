/*
4. Пользователь вводит с клавиатуры сумму в гривнах и курс доллара, евро
и рубля. Посчитать, сколько пользователь сможет купить долларов, евро
и рублей. При этом количество долларов, евро и рублей должно быть
целым. Дополнительно вывести на экран сдачу в гривнах.
*/

#include<iostream>
#include <Windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //працює тільки з потоком виведення
	SetConsoleCP(1251); //встановлює потрібну кодову таблицю, на потік введення
	SetConsoleOutputCP(1251); //встановлює потрібну кодову таблицю, на потік виводу

	cout << "Введите сумму в гривнах: " << endl;
	double amount_in_hryvnia{ 0.0 };
	cin >> amount_in_hryvnia; //100

	cout << "Введите курс доллара: " << endl;
	double dollar_rate;
	cin >> dollar_rate; // 27.00

	double hryvnia_to_dollars = amount_in_hryvnia / dollar_rate; // 100/27=3,703703703703704
	double change_from_dollar =
		amount_in_hryvnia - ((int)hryvnia_to_dollars * dollar_rate); // 100-(3*27)=19


	cout << "Введите курс евро: " << endl;
	double euro_rate;
	cin >> euro_rate; // 30.51

	double hryvnia_to_euro = amount_in_hryvnia / euro_rate; // 100/30.51=3,277613897082924
	double change_from_euro =
		amount_in_hryvnia - ((int)hryvnia_to_euro * euro_rate); // 100-(3*30.51)=8.47


	cout << "Введите курс рубля: " << endl;
	double rubles_rate;
	cin >> rubles_rate; // 0.37

	double hryvnia_to_rubles = amount_in_hryvnia / rubles_rate; // 100/0.37=270,2702702702703
	double change_from_ruble =
		amount_in_hryvnia - ((int)hryvnia_to_rubles * rubles_rate); // 100-(270*0.37)=0.1

	cout << "На " << amount_in_hryvnia << " грн. Вы сможете купить:\n"
		<< (int)hryvnia_to_dollars << " долларов, сдача составит " << change_from_dollar << " грн.\n"
		<< (int)hryvnia_to_euro << " евро, сдача составит " << change_from_euro << " грн.\n"
		<< (int)hryvnia_to_rubles << " рублей, сдача составит " << change_from_ruble << " грн.\n";

	return 0;
}