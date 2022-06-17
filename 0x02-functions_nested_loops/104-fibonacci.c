#include <stdio.h>
/**
 * main - prints out first 98
 *
 */
int main(void)
{
	int inc;
	unsigned long i = 0, l = 1, n3;
	unsigned long m, k, p, q, h1, h2;

	for (inc = 0; inc < 92; inc++)
	{
		n3 = i + l;
		printf("%lu, ", n3);
		i = l;
		l = n3;
	}
	m = i / 10000000000;
	p = l / 10000000000;
	k = i % 10000000000;
	q = l % 10000000000;
	for (inc = 93; inc < 99; inc++)
	{
		h1 = m + p;
		h2 = k + q;
		if ((k + q) > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (inc != 98)
			printf(", ");
		m = p;
		k = q;
		p = h1;
		q = h2;
	}
	printf("\n");
	return (0);
}
