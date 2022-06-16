#include <stdio.h>
#include <unistd.h>

/**
 * main - beautiful betty pass code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char buffer[] = "This is a beautiful betty pass code";

	write(STDOUT_FILENO, buffer, 36);
	return (0);
}
