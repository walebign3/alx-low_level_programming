#include "main.h"

/**
 * print_line - print numbers 0-9 except 2 and 4
 * @n: return value
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i <= n; i++)
			_putchar(95);
	_putchar('\n');
}
