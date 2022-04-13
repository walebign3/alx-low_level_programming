#include "main.h"

/**
 *print_alphabet - print alphabet in lowercase
 * Description: print_alphabet function prints alphabet.
 *  Return: lower case alphabet list.
 */
void print_alphabet(void)
{
	int n;
	for (n = 'a'; n <= 'z'; n++)
		_putchar(n);
	_putchar('\n');
}
