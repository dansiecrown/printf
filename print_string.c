#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_string - Print a string argument
 * @args: The list of arguments
 *
 * Return: The number of bytes printed
 */
int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int i = 0;

	if (s == NULL)
		s = "(null)";

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}

	return (i);
}
