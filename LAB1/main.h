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
		cout << "� - " << setw(4) << num << " | " << "������ - " << setw(15) << model << " | " << "����� -  " << setw(4) << summ << " | " << endl;
	}

	void set_prn() {
		cout << "������� �����: ";
		cin >> num;
		getline(cin, model);
		cout << "������� ������: ";
		getline(cin, model);
		cout << "������� �����: ";
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
		cout << "� - " << setw(4) << humnum << " | " << "��� - " << setw(15) << FIO << " | " << "��� - " << setw(4) << sex << " | " << "������� " << setw(4) << age << " | " << endl;
	}

	void Input(){
		cout << "������� �����: ";
		cin >> humnum;
		getline(cin, FIO);
		cout << "������� ���: ";
		getline(cin, FIO);
		cout << "������� ���: ";
		cin >> sex;
		cout << "������� �������: ";
		cin >> age;
	}
};


