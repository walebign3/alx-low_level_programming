#include "main.h"

/**
 * puts2 - string display
 * @str: pointer to char
 *
 * Return: void
 */
void puts2(char *str)
{
	int n = 0;

	while (*(str + n) != '\0')
	{
		if (n % 2 == 0)
			_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
