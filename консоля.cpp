#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	int weekday, day;




	cout << "Введите номер дня недели (от 1 до 7): ";
	cin >> weekday;

	if (weekday < 1 || weekday > 7) {
		cout << "Вы ввели неправильное число." << endl;
	}
	else {
		cout << "Введите номер дна месяца (от 1 до 31): ";
		cin >> day;
		if (day < 1 || day > 31) {
			cout << "Вы ввели неправильное число." << endl;
		}
		else if (day <= 5) {
			cout << "Выходной!" << endl;
		}
		else if (day >= 8 && day <= 10) {
			cout << "Выходной!" << endl;
		}
		else if ((day - weekday) % 6 == 0 || (day - weekday) % 7 == 0) {
			cout << "Выходной!" << endl;
		}
		else {
			cout << "Рабочий день!" << endl;
		}

	}
}
