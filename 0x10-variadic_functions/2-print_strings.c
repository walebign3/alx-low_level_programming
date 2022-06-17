#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: dendmiter
 * @n: numbers
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_ndst nd;
	char *str;
	unsigned int i;

	va_start(nd, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(nd, char *);
		if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
	if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(nd);
}
