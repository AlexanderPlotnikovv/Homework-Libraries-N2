#include <iostream>

#include "CounterClass.h"

int Counter::add() { return counter++; }
int Counter::subtract() { return counter--; }
void Counter::print() { std::cout << counter; }
void Counter::value(int a) { counter = a; }