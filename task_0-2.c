#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 * d_i - prints int
 * @d: int to print
 * Return: void
 */
void d_i(int d)
{
	int n = 0;
	int b = d;
	int negative = 0;
	int digit_num = 0;
	int s_n = 0;
	char s[32];

	for (n = 1; b / 10 != 0; n++)
	{
		b = b / 10;
	}

	if (d < 0)
	{
		d = -d;
		negative++;
	}
	n++;
	s_n = n;

	n--;
	s[n] = '\0';
	n--;
	while (d != 0)
	{
		digit_num = d % 10;
		s[n] = '0' + digit_num;
		d = d / 10;
		n--;
	}

	if (negative)
	{
		write(1, "-", 1);
	}
	write(1, s, s_n);
}

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
void str_print(const char *s)
{
	int m = 0;

	while (s[m] != '\0')
	{
		m++;
	}

	write(1, s, m);
}
