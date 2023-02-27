#include "main.h"

/**
 * puts_half - functiom prints half of a string
 * @str: string to be printed
 * Return: 0
 */

void puts_half(char *str)
{
	int s = 0, n;

	while (str[s] != '\0')
		s++;
	if (s + 1 % 2 != '0')
		n = (s - 1) / 2;
	else
		n = (s / 2);
	n++;

	for (s = n; str[s] != '\0'; s++)
		_putchar(str[s]);
	_putchar('\n');
}
