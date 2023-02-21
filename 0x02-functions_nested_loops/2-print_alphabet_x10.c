#include "main.h"

/**
 * print_alphabet_x10 - function that prints the alphabet ten times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int num;
	char alp;

	for (num = 1 ; num <= 10 ; num++)
	{
		for (alp = 'a' ; alp <= 'z' ; alp++)
			_putchar(alp);
		_putchar('\n');
	}
}
