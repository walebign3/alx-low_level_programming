#include "main.h"

/**
 * _print_rev_recursion - print numbers 0-9 except 2 and 4
 * @s: pointer
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
