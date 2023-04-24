#include "CounterClass.h"

#include <iostream>

int main()
{
	std::cout << "Do you want to enter start value? Enter yes or no: ";
	std::string a1;
	std::cin >> a1;
	int a;
	char b = ' ';
	Counter p;
	if (a1 == "Yes" || a1 == "yes") {
		std::cout << "Enter start value: ";
		std::cin >> a;
		p.value(a);
	}
	else {
		a = 1;
		p.value(a);
	}
	while (b != 'x') {
		std::cout << "Enter command ('+', '-', '=' or 'x'): ";
		std::cin >> b;
		if (b == '+') {
			p.add();
		}
		if (b == '-') {
			p.subtract();
		}
		if (b == '=') {
			p.print();
			std::cout << std::endl;
		}
		if (b == 'x') {
			std::cout << "Bye";
		}
	}
}