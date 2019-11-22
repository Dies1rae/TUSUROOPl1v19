#include <iostream>
#include <math.h>
#include <cmath>
#include <iomanip>
#include <tchar.h>
#include <conio.h>
#include <iostream>
#include <Windows.h>
#include <mmsystem.h>
#include <fstream>
#include <string>
#include <iostream>
#include <stdio.h>
#include <sys/types.h>
#include <process.h>
#include <thread>
#include "main.h"
using namespace std;
#pragma once
#pragma comment(lib, "Winmm.lib")


Person person(0, "Poltavskiy N", true, 32.2);
Printer print(0, "HP LJ 335", 100);


void muslo() {
	WORD result = mciSendString("play Z:\\Shared\\Study\\OOP\\LAB1\\LAB1\\LPNUMB1.mp3 wait", NULL, 0, NULL);
	if (result) {
		cerr << "ERROR" << endl;
	}
}

int main() {
	int menu = 1;
	setlocale(LC_ALL, "Russian");
	thread thr(muslo);
	while (menu) {
		// --------------- METODICHKA CHECK -------------------------------
		/*person.get_person();
		Person *CHEL = new Person(2,"r", false, 22.2);
		CHEL->get_person();
		delete(CHEL);
		Person *CHELN = new Person();
		CHELN->Input();
		CHELN->get_person();*/
		// --------------- METODICHKA CHECK -------------------------------
		Printer* pr1 = new Printer(1, "Keyocera", 235.5);
		pr1->get_prn();
		delete(pr1);
		Printer* pr2 = new Printer();
		pr2->set_prn();
		pr2->get_prn();
		cout << "MENU: ";
		cin >> menu;
	}
	thr.join();
	cout << "Thats all for today kid. See ya..." << endl;

	return 0;
}
