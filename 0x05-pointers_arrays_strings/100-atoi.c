/**
 * _atoi - convert string to integer
 * @s: string
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int n = 1;
	unsigned int intr = 0;

	do {
		if (*s == '-')
			n = n * -1;
		else if (*s >= '0' && *s <= '9')
			intr = (intr * 10) + (*s - '0');
		else if (intr > 0)
			break;
	} while (*s++);
	return (intr *n);
}
