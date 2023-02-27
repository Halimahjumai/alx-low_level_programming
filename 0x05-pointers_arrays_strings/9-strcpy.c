#include "main.h"

/**
 * _strcpy - function copies the string pointed to by src
 * @dest: first parameter
 * @src: second parameter
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] = src[a];
	dest[a] = '\0';
	return (dest);
}
