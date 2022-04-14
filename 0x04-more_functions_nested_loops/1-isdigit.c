#include "main.h"

/**
 * _isdigit - check if the c is a digit
 * @c: identify digit or not
 * Description: print 1 if it is digit or 0 otherwise.
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
