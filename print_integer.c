#include "main.h"
#include <stdarg.h>

/**
 * print_int - Prints a signed integer argument
 * @args: The list of arguments
 *
 * Return: The number of bytes printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		count++;
		m = -n;
	}
	else
	{
		m = n;
	}
	if (m / 10)
		count += print_int_rec(m / 10);
	_putchar((m % 10) + '0');
	count++;

	return (count);
}
