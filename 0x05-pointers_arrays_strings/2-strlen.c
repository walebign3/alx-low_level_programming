#include "main.h"

/**
 * _strlen - string length
 * @s: pointer 1
 *
 * Return: void
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}
