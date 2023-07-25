#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - Produces output according to a format string.
 * @format: The format string.
 *
 * Return: The number of bytes printed or -1 on error.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;
	int (*func)(va_list);

	if (format == NULL)
		return (-1);
	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			func = get_print_func(format[i]);
			if (func == NULL)
			{
				_putchar('%');
				_putchar(format[i]);
				count += 2;
			}
			else
			{
				count += func(args);
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(args);

	return (count);
}
