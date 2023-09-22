#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * b_print - prints binary
 * @x: int to convert to binary and print
 * Return: void
 */
void b_print(int x)
{
	int j = x;
	int n = 0;
	int s_n = 0;
	char b[32];

	for (n = 1; j / 2 != 0; n++)
	{
		j = j / 2;
	}

	s_n = n;

	n--;
	b[n] = '\0';

	while (x != 0)
	{
		if (x % 2 == 0)
		{
			b[n] = '0';
		}
		else
		{
			b[n] = '1';
		}
		x = x / 2;
		n--;
	}

	write(1, b, s_n);
}

/**
 * str_print - prints string
 * @s: string to print
 * Return: void
 */
int str_print(const char *s)
{
	int m = 0;
	int i = 0;

	for (m = 0; s[m] != '\0'; m++)
	{
		i++
	}
	write(1, s, m);
	return (n);
}
