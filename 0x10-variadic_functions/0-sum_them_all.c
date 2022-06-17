#include "variadic_functions.h"

/**
 * sum_them_all - function returns sum of arg
 * @n: 1st arg
 *
 * Return: sum or 0 in case of NULL
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int m;
	va_list arg;
	int sum = 0;

	va_start(arg, n);

	if (n != 0)
	{
		for (m = 0; m < n; m++)
		{
			sum += va_arg(arg, int);
		}
	}
	va_end(arg);
	return (sum);
}
