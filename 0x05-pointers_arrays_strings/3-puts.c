#include "main.h"

/**
 * _puts - function prints a string
 * @str: parameter to be printed
 * Return: length of the string
 */

void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
