#include "main.h"

/**
 * swap_int - function swaps values of two integers
 * @a: first pointer
 * @b: second pointer
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
