#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - this is the main function
*
* Return: return whether the number is +/-
*/
int main(void)
{
/*
* This is for main
*
* Description:
* This function does whatever
*/
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n < 0)
	printf("%i is negative\n", n);
else if (n > 0)
	printf("%i is positive\n", n);
else
	printf("%i is zero\n", n);
return (0);
}
