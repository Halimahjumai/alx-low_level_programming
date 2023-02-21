#include "main.h"

/**
 * print_last_digit - this function prints last digit
 *
 * @i: funvtion parameter
 *
 * Return: j
 */

int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (i < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}
