#include "main.h"
#include <stdarg.h>

/**
 * print_octal - prints an unsigned int argument in octal
 * @args: the list of arguments
 *
 * Return: the number of bytes printed
 */
int print_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		count += print_octal_rec(n);
	}
	return (count);
}

/**
 * print_octal_rec - prints an unsigned int in an octal recursively
 * @n: the unsigned int to print
 *
 * Return: the number of bytes printed
 */
int print_octal_rec(unsigned int n)
{
	int count = 0;

	if (n / 8)
		count += print_octal_rec(n / 8);
	_putchar((n % 8) + '0');
	count++;

	return (count);
}
