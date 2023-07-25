#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_binary - Prints an unsigned int argument in binary
 * @args: The list of arguments
 *
 * Return: The number of bytes printed
 */
int print_binary(va_list args)
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
		count += print_binary_rec(n);
	}
	return (count);
}

/**
 * print_binary_rec - Prints an unsigned int in binary recursively
 * @n: The unsigned int to print
 *
 *Return: The number bytes printed
 */
int print_binary_rec(unsigned int n)
{
	int count = 0;

	if (n / 2)
		count += print_binary_rec(n / 2);
	_putchar((n % 2) + '0');
	count++;

	return (count);
}
