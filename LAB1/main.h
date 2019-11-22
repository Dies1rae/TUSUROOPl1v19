#include <string>
#include <iomanip>
using namespace std;
#pragma once



class Printer {
private:
	string model;
	int num;
	float summ;
public:
	Printer(int a, string b, float d) {
		num = a;
		model = b;
		summ = d;
	}
	Printer() {
		num = 0;
		model = "HP LJ";
		summ = 0.0;
	}
	void get_prn() {
		cout << "№ - " << setw(4) << num << " | " << "МОДЕЛЬ - " << setw(15) << model << " | " << "СУММА -  " << setw(4) << summ << " | " << endl;
	}

	void set_prn() {
		cout << "Введите номер: ";
		cin >> num;
		getline(cin, model);
		cout << "Введите модель: ";
		getline(cin, model);
		cout << "Введите сумму: ";
		cin >> summ;
	}
};



class Person {
private:
	int humnum;
	string FIO;
	bool sex;
	float age;
public:
	Person(int a, string b, bool c, float d) {
		humnum = a;
		FIO = b;
		sex = c;
		age = d;
	}
	Person() {
		humnum = 0;
		FIO = "Jon Do";
		sex = true;
		age = 0.0;
	}
	void get_person() {
		cout << "№ - " << setw(4) << humnum << " | " << "ФИО - " << setw(15) << FIO << " | " << "ПОЛ - " << setw(4) << sex << " | " << "Возраст " << setw(4) << age << " | " << endl;
	}

	void Input(){
		cout << "Введите номер: ";
		cin >> humnum;
		getline(cin, FIO);
		cout << "Введите ФИО: ";
		getline(cin, FIO);
		cout << "Введите ПОЛ: ";
		cin >> sex;
		cout << "Введите возраст: ";
		cin >> age;
	}
};


