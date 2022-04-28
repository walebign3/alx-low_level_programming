#include "main.h"

/**
 * _strlen_recursion - print numbers 0-9 except 2 and 4
 * @s: pointer
 *
 * Return: void
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
