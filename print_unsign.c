#include "main.h"
#include <stdarg.h>

/**
 * print_unsign - Prints an unsigned int argument
 * @args: The list of arguments
 *
 * Return: The number of bytes printed
 */
int print_unsign(va_list args)
{
	unsigned int n = va_arg(args,  unsigned int);
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		count += print_unsigned_rec(n);
	}
	return (count);
}

/**
 * print_unsigned_rec - print an unsigned int recursively
 * @n: The unsigned int to print
 *
 * Return: the number of bytes printed
 */
int print_unsigned_rec(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += print_unsigned_rec(n / 10);
	_putchar((n % 10) + '0');
	count++;

	return (count);
}
