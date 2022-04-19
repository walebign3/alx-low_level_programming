#include "main.h"

/**
 * puts_half - string display
 * @str: pointer to char
 *
 * Return: void
 */
void puts_half(char *str)
{
	int n = 0;
	int m = 0;

	while (*(str + n) != '\0')
		n++;
	m = n / 2;
	while (*(str + m) != '\0')
	{
		_putchar(*(str + m));
		m++;
	}
	_putchar('\n');
}
