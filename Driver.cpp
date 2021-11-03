#include <iostream>
#include "Menu.h"
#include "Rational.h"
#include <stdexcept>
using namespace std;

template <class T>
bool isExist(T arr[], T Val, int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == Val)
			return true;
	}
	return false;
}

const char* stringMultiply(const char* str, int n) {
	if (strlen(str) == 0 || n <= 0) {
		throw invalid_argument("the argument must be > 0");
	}
	string* s = new string(str);
	string* out= new string("");
	for (int i = 0; i < n; i++) {
		*out += *s;
	}
	return out->c_str();
}

int main() {
	/*Menu* menu = new Menu();
	menu->Run();
	delete menu;*/

	try {
		cout << stringMultiply("abcd", 0);
	}

	catch (invalid_argument const& e) {
		cout << "Error: " << e.what() << endl;
	}

	system("pause>0");
}
