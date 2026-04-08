// Task 11 [The arithmetic mean]
// Среднее арифметическое
//
// Необходимо спроектировать и реализовать программу, 
// которая вычисляет среднее арифметическое элементов вектора.

#include "logic.h"

double recursion(int vector[], int size) {
	if (size == 1) {
		return vector[0];
	}
	size--;
	return recursion(vector, size) + vector[size];
}

double calculate_average(int vector[], int size) {
	if (size <= 0) {
		return -1;
	}

	return recursion(vector, size) / size;
	
}