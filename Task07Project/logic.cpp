// Task 07 [The number of odd digits]
// Количество нечётных цифр
//
// Необходимо спроектировать и реализовать программу, 
// которая считает количество нечётных цифр
// в заданном целом числе.


#include "logic.h"



int count_of_odd_digits(int number) {
	number = number < 0 ? -number : number;

	if (number == 0) {
		return 0;
	}
	int d1 = number % 10;
	int count = d1 % 2 == 0 ? 0 : 1;

	return count + count_of_odd_digits(number / 10);
}