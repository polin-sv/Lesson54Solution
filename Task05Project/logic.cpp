// Task 05 [The number of digits]
// Количество цифр числа
// 
// Необходимо спроектировать и реализовать программу, 
// которая подсчитывает количество цифр 
// в заданном целом числе.


#include "logic.h"

int count(int number) {

	if (number <= 9 && number >= -9) {
		return 1;
	}

	return 1 + count(number / 10);

}