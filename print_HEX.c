#include "main.h"
#include <stdarg.h>

/**
 * print_HEX - print an unsigned int argument in uppercase hexadecimal
 * @args: the list of arguments
 *
 * Return: the number of bytes printed
 */
int print_HEX(va_list args)
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
		count += print_HEX_rec(n);
	}

	return (count);
}

/**
 * print_HEX_rec - print an unsigned int in uppercase hexadecimal recursively
 * @n: the unsigned int to print
 *
 * Return: the number of bytes printed
 */
int print_HEX_rec(unsigned int n)
{
	int count = 0;
	char hex[] = "0123456789ABCDEF";

	if (n / 16)
		count += print_HEX_rec(n / 16);
	_putchar(hex[n % 16]);
	count++;

	return (count);
}
