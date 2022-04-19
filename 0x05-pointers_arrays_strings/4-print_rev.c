#include "main.h"

/**
 * print_rev - string display
 * @s: pointer to char
 *
 * Return: void
 */
void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
