#include "main.h"

/**
 * print_alphabet_x10 - print alphabet in lowercase
 * Description: print_alphabet function prints alphabet.
 * Return: lower case alphabet list.
 */
void print_alphabet_x10(void)
{
	int n;
	int m = 0;
	
	while (m <= 10)
	{
        	for (n = 'a'; n <= 'z'; n++)
			_putchar(n);
        	_putchar('\n');
		++m;
	}
}
