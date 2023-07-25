#include "main.h"
#include <stdarg.h>

/**
 * print_char - Print a char argument
 * @args: The list of arguments
 *
 * Return: The number of bytes printed
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}
