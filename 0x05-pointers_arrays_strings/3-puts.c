#include "main.h"

/**
 * _puts - string display
 * @str: pointer to char
 *
 * Return: void
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
