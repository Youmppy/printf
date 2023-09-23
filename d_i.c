#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * d_i - prints int
 * @d: int to print
 * Return: void
 */

int d_i(int d)
{
	int b = d;
	int digit_num;
	int is_negative = 0;
	int num_digits = 0;
	int i;
	char *s;

	if (d < 0)
	{
		is_negative = 1;
		d = -d;
	}

	while (b != 0)
	{
		b = b / 10;
		num_digits++;
	}

	s = (char *)malloc(num_digits + 1);
	if (s == NULL)
	{
		return (1);
	}
	s[num_digits] = '\0';

	for (i = num_digits - 1; i >= 0; i--)
	{
		digit_num = d % 10;
		s[i] = '0' + digit_num;
		d = d / 10;
	}

	if (is_negative)
	{
		write(1, "-", 1);
	}

	write(1, s, num_digits);

	free(s);
	return (is_negative + num_digits);
}
