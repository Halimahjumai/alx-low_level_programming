#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all- function adds all the numbers
 * @n: number of parameters passed
 * @...: a variable number of parameters to calculate the sum
 * Return: sum or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{int arg = va_arg(args, int);
		sum += arg;
	}
	va_end(args);
	return (sum);
}
