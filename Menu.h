#pragma once
#include "CSet.h"
#include <iostream>
using namespace std;

class Menu {
public:
	Menu();
	~Menu();
	void Run();
	void Run2();
	void Run3();
	void Run4();

	void print_menu();
	void print_menu2();
	void print_menu3();
	void print_menu4();

	void addNewElement();
	void deleteElement();
	void unite2Groups();
	void Print();

	void AddElementLong();
	void AddElementChar();
	void AddElementChar2();
	void AddElementString();

	void DeleteElementLong();
	void DeleteElementChar();
	void DeleteElementChar2();
	void DeleteElementString();

private:
	CSet<long> l_set;
	CSet<char> c_set1;
	CSet<char> c_set2;
	CSet<string> s_set;
};

Menu::Menu() {}
Menu::~Menu(){}

///////////////////////////////////////////////////////////
void Menu::print_menu() {
	cout << "---------------------------------------\n";
	cout << "                  MENU: " << endl;
	cout << "1. ADD New Element to Group" << endl;
	cout << "2. Delete Element from Group" << endl;
	cout << "3. Unite two Char conataining Groups" << endl;
	cout << "4. Print Group" << endl;
	cout << "5. Exit" << endl;
	cout << "\n---------------------------------------\n";
}
void Menu::print_menu2() {
	cout << "****************************************\n";
	cout << "1- ADD New Element to long group" << endl;
	cout << "2- ADD New Element to char group" << endl;
	cout << "3- ADD New Element to char group2" << endl;
	cout << "4- ADD New Element to string group" << endl;
	cout << "5- Exit" << endl;
	cout << "****************************************\n";
}
void Menu::print_menu3() {
	cout << "****************************************\n";
	cout << "1- Delete Element to long group" << endl;
	cout << "2- Delete Element to char group" << endl;
	cout << "3- Delete Element to char group2" << endl;
	cout << "4- Delete Element to string group" << endl;
	cout << "5- Exit" << endl;
	cout << "****************************************\n";
}
inline void Menu::print_menu4(){
	cout << "****************************************\n";
	cout << "1- Print long group" << endl;
	cout << "2- Print char group" << endl;
	cout << "3- Print char group2" << endl;
	cout << "4- Print string group" << endl;
	cout << "5- Exit" << endl;
	cout << "****************************************\n";
}
///////////////////////////////////////////////////////////
inline void Menu::addNewElement() {
	void Run2();
}
inline void Menu::deleteElement() {
	void Run3();
}
inline void Menu::unite2Groups(){
	//cout << c_set2.UNION(c_set1);
}
inline void Menu::Print() {
	void Run4();
}
///////////////////////////////////////////////////////////
inline void Menu::AddElementLong() {
	long l;
	cout << "enter a long" << endl;
	cin >> l;
	l_set.operator+=(l);
}

inline void Menu::AddElementChar() {
	char c;
	cout << "enter a char" << endl;
	cin >> c;
	c_set1.operator+=(c);
}

inline void Menu::AddElementChar2() {
	char c;
	cout << "enter a char" << endl;
	cin >> c;
	c_set2.operator+=(c);
}

inline void Menu::AddElementString() {
	string s;
	cout << "enter a string" << endl;
	cin >> s;
	s_set.operator+=(s);
}
///////////////////////////////////////////////////////////
inline void Menu::DeleteElementLong() {
	long l;
	cout << "enter a long" << endl;
	cin >> l;
	l_set.operator-=(l);
}
inline void Menu::DeleteElementChar() {
	char c;
	cout << "enter a char" << endl;
	cin >> c;
	c_set1.operator-=(c);
}
inline void Menu::DeleteElementChar2() {
	char c;
	cout << "enter a char" << endl;
	cin >> c;
	c_set2.operator-=(c);
}
inline void Menu::DeleteElementString() {
	string s;
	cout << "enter a string" << endl;
	cin >> s;
	s_set.operator-=(s);
}
///////////////////////////////////////////////////////////
void Menu::Run() {
	int choice;
	bool isRunning = true;
	while (isRunning) {
		print_menu();
		cin >> choice;

		switch (choice)
		{
		case 1: addNewElement();
			Run2();
			break;
		case 2: deleteElement();
			Run3();
			break;
		case 3: unite2Groups();
			break;
		case 4: Print();
			Run4();
			break;
		case 5: isRunning = false;
			break;

		default: 
			break;
		}
	}
}
void Menu::Run2() {
	int choice;
	bool isRunning = true;
	while (isRunning) {
		print_menu2();
		cin >> choice;

		switch (choice) {
		case 1: AddElementLong();
			break;
		case 2: AddElementChar();
			break;
		case 3: AddElementChar2();
			break;
		case 4: AddElementString();
			break;
		case 5: isRunning = false;

		default:
			break;
		}
	}
}
void Menu::Run3() {
	int choice;
	bool isRunning = true;
	while (isRunning) {
		print_menu3();
		cin >> choice;

		switch (choice) {
		case 1: DeleteElementLong();
			break;
		case 2: DeleteElementChar();
			break;
		case 3: DeleteElementChar2();
			break;
		case 4: DeleteElementString();
			break;
		case 5: isRunning = false;

		default:
			break;
		}
	}
}
void Menu::Run4(){
	int choice;
	bool isRunning = true;
	while (isRunning) {
		print_menu4();
		cin >> choice;

		switch (choice) {
		case 1: //cout << l_set;
			break;
		case 2: //cout << c_set1;
			break;
		case 3: //cout << c_set2;
			break;
		case 4: //cout << s_set;
			break;
		case 5: isRunning = false;

		default:
			break;
		}
	}
}
