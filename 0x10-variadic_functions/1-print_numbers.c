#include "variadic_functions.h"

/**
 * print_numbers - function prints in new line
 * @separator: strings
 * @n: numbers
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list nd;
	unsigned int i;

	va_start(nd, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nd, int));
		if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
		printf("\n");
		va_end(nd);
}
