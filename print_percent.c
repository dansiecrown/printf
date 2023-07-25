#include "main.h"
#include <stdarg.h>

/**
 * print_percent - Prints a percent sign
 * @args: The list of arguments (unused)
 *
 * Return: The number of bytes printed (always 1)
 */
int print_percent(va_list args __attribute__((unused)))
{
	return (_putchar('%'));
}
