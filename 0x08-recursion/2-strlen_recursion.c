#include "main.h"

/**
 * _strlen_recursion - this function checks the length of a string
 * @s: - function parameter
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}
	return (longit);
}
