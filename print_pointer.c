#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_pointer - prints apointer argument
 * @args: the list of arguments
 *
 * Return: the number of bytes printed
 */
int print_pointer(va_list args)
{
	void *p = va_arg(args, void *);
	unsigned long int n = (unsigned long int)p;
	int count = 0;
	char hex[] = "0123456789abcdef";

	if (p == NULL)
	{
		_putchar('(');
		_putchar('n');
		_putchar('i');
		_putchar('l');
		_putchar(')');
		count += 5;
	}
	else
	{
		_putchar('0');
		_putchar('x');
		count += 2;
		count += print_pointer_rec(n, hex);
	}

	return (count);
}

/**
 * print_pointer_rec - prints an unsigned long int in lowercse hex recursively
 * @n: the unsigned long int to print
 * @hex: the array of hexadecimal digits
 *
 * Return: the number of bytes printed
 */
int print_pointer_rec(unsigned long int n, char *hex)
{
	int count = 0;

	if (n / 16)
		count += print_pointer_rec(n / 16, hex);
	_putchar(hex[n % 16]);
	count++;

	return (count);
}
