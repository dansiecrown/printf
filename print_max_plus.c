#include "main.h"
#include <limits.h>

/**
 * print_max_plus - print the value of (unsigned int) INT_MAX + 1024
 * @args: the list of arguments (unused)
 *
 * Return: the number of byte printed
 */
int print_max_plus(va_list args __attribute__((unused)))
{
	unsigned int x = (unsigned int) INT_MAX + 1024;

/* use the existing function to print an unsigned int */
	return (print_unsigned_rec(x));
}
