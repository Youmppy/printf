#include "main.h"

/**
 * format_checker - custom printf function
 * @c: format string
 * @ap: list
 * @n: int
 * Return: number of characters printed
 */

int format_checker(char c, va_list ap, int n)
{
	if (c == 'c')
	{
		char ch = va_arg(ap, int);

		write(1, &ch, 1);
		n++;
	}
	else if (c == 's')
	{
		char *str = va_arg(ap, char*);

		n = n + str_print(str);
	}
	else if (c == '%')
	{
		write(1, "%", 1);
		n++;
	}
	else if (c == 'b')
	{
		int num = va_arg(ap, int);

		b_print(num);
	}
	else
	{
		write(1, &c, 1);
		n++;
	}

	return (n);
}

/**
 * _printf - custom printf function
 * @format: format string
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int c = 0;
	va_list ap;

	va_start(ap, format);
	if (!format[i])
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(1, format + i, 1);
			i++;
			c++;
		}
		else
		{
			i++;
			c = format_checker(format[i], ap, c);
			i++;
		}
	}

	va_end(ap);
	return (c);
}

