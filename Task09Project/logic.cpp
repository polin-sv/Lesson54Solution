// Task 09 [The sum VI]
// Сумма
//
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет сумму цифр заданного числа, кратных 5.



#include "logic.h"

int sum(int number) {
	number = number < 0 ? -number : number;

	if (number == 0) {
		return 0;
	}

	int last_digit = number % 10;
	int digit = 0;

	if (last_digit % 5 == 0) {
		digit = last_digit;
	}

	return digit + sum(number / 10);
}