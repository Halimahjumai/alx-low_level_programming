#include "main.h"

/**
 * print_line - this function prints lines
 * @n: function parameter
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}