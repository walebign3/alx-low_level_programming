#include "main.h"

/**
 * _puts_recursion - print numbers 0-9 except 2 and 4
 * @s: pointer
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
