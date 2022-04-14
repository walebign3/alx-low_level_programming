#include "main.h"

/**
 * print_numbers - print numbers 0-9
 *  
 * Description: print numbers 0-9 followed by new line.
 * Return: return numbers 0-9 followed by new line.
 */
void print_numbers(void)
{
	int n;
			
	for (n = 48; n <= 57; n++)
		_putchar(n);
	_putchar('\n');
}