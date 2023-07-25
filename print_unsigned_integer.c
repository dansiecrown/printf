#include "main.h"

/**
 * print_int_rec - Prints an unsigned integer recursively
 * @n: The unsigned integer to print
 *
 * Return: The number of byte printed
 */
int print_int_rec(unsigned int n)
{
	int count = 0;

	if (n / 10)
		count += print_int_rec(n / 10);
	_putchar((n % 10) + '0');
	count++;

	return (count);
}
