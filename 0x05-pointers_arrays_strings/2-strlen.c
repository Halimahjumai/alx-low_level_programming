#include "main.h"

/**
 * _strlen - function returns length of string
 * @s: string to be checked
 * Return: 0
 */

int _strlen(char *s)
{
	int x = 0;

	for (; *s++;)
		x++;
	return (x);
}
