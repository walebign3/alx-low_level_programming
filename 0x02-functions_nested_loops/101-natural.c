#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024 (excluded),
 * Return: 0
 */
int main(void)
{
	unsigned long int s3 = 0, s5 = 0, sum = 0;
	int i;
	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			s3 = s3 + i;
		}
		else if ((i % 5) == 0)
		{
			s5 = s5 + i;
		}
	}
	sum = s3 + s5;
	printf("%lu\n", sum);
	return (0);
}
