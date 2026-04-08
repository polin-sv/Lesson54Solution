// Task 10 [The number of positive elements]
// Количество положительных элементов
//
// Необходимо спроектировать и реализовать программу, 
// которая подсчитывает количество положительных элементов вектора.

#include "logic.h"

int recursion(int vector[], int size) {
	if (size == 1) {
		return vector[0] > 0 ? 1 : 0;
	}
	size--;
	return recursion(vector, size) + (vector[size] > 0 ? 1 : 0);
}

int count_of_positive_elements(int vector[], int size) {
	if (size <= 0) {
		return -1;
	}

	return recursion(vector, size);
}