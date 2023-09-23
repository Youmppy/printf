#include <unistd.h>
#include <stdarg.h>
#include "main.h"

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
		i++;
	}

	write(1, s, m);
	return (i);
}

