﻿#include "tasks.h"

/*	Task 04. Count of Number Digits [подсчёт цифр числа]
*
*	Дано целое число (может быть как положительным, так и отрицательным).
*	Подсчитайте количество цифр в нём.
*
*	Формат входных данных [input]
*	На вход функция принимает целое число типа long long.
*
*	Формат выходных данных [output]
*	Функция должна возвратить целое число, которое является решением задания.
*
*	[ input 1]: 15
*	[output 1]: 2
*
*	[ input 2]: 9
*	[output 2]: 1
*
*	[ input 3]: 0
*	[output 3]: 1
*
*	[ input 4]: -15
*	[output 4]: 2
*/

int task04(long long number) {
	int countD = 1;

	number = number > 0 ? number : -number;

	while (number > 9) {
		number /= 10;
		countD++;
	}

	return countD;
}