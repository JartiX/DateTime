#include <iostream>
#include "Date/DateTime.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "ru-RU");
	// ������������ ����
	Datetime date_1, date, test_date, test_date_2;
	try {
		date_1 = Datetime(1, 3, 2003);
		date = Datetime(30, 3, 2024);
		cout << date;
		test_date = Datetime("1.01.2001");
		cout << test_date;
		test_date_2 = Datetime("2001-01-20T21:13:2");
		cout << test_date_2;
	}
	catch (const char ex) {
		cerr << ex;
	}

	//// ���� ����� stdin
	//Datetime date_2;
	//cin >> date_2;
	//cout << "��������� ����: " << date_2;

	// ������� � ����
	cout << date_1 - date << endl;
	cout << date_1 + date << endl;

	// ���������� ��� ������ / ����
	int day_of_week, day_of_year;
	day_of_week = date.Calculate_day_of_week();
	cout << day_of_week << endl;
	day_of_year = date.Calculate_day_of_year();
	cout << day_of_year << endl;

	// ���������� ��������� ����
	cout << date.Julian_days() << endl;

	// �������� ���� �� ����������
	cout << date.isDateValid() << endl;

	Datetime abc(12, 6, 2004);
	Datetime new_date;
	new_date = abc + 15;
	cout << new_date;
}