#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * format_checker - Custom printf function
 * @c: The format specifier character.
 * @ap: The va_list containing the arguments.
 *
 * This function processes the format specifier
 * and prints the corresponding values.
 */
void format_checker(char c, va_list ap)
{
	if (c == 'c')
	{
		char ch = va_arg(ap, int);

		write(1, &ch, 1);
	}
	else if (c == 's')
	{
		char *str = va_arg(ap, char *);

		if (str != NULL)
		{
			while (*str)
			{
				write(1, str, 1);
				str++;
			}
		}
		else
		{
			write(1, "(null)", 6);
		}
	}
	else if (c == '%')
	{
		write(1, "%", 1);
	}
}

/**
 * _printf - Custom printf function.
 * @format: The format string.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int i = 0;
	va_list ap;

	va_start(ap, format);
	if (!format)
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(1, format + i, 1);
			i++;
		}
		else
		{
			i++;
			if (format[i] != '\0')
			{
				format_checker(format[i], ap);
				i++;
			}
		}
	}

	va_end(ap);
	return (i);
}
