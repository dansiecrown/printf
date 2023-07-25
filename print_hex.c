#include "main.h"
#include <stdarg.h>

/**
 * print_hex - prints an unsigned int argument in lowercase hexadecimal
 * @args: the list of arguments
 *
 * Return: the number of bytes printed
 */
int print_hex(va_list args)
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
		count += print_hex_rec(n);
	}

	return (count);
}

/**
 * print_hex_rec - print unsigned int in lowercase in hexadecimal recursively
 * @n: the unsigned int to print
 *
 * Return: the number of bytes printed
 */
int print_hex_rec(unsigned int n)
{
	int count = 0;
	char hex[] = "0123456789abcdef";

	if (n / 16)
		count += print_hex_rec(n / 16);
	_putchar(hex[n % 16]);
	count++;

	return (count);
}
