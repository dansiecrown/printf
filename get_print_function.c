#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * get_print_func - Returns a pointer to the corresponding print function.
 * @c: The conversion specifier
 *
 * Return: A pointer to the print function or NULL if not found.
 */
int (*get_print_func(char c))(va_list)
{
	int i;
	char cs[] = {'c', 's', '%', 'd', 'i', 'b', 'u',
		'o', 'x', 'X', 'S', 'p', 'M'};
	int (*funcs[])(va_list) = {
		print_char,
		print_string,
		print_percent,
		print_int,
		print_int,
		print_binary,
		print_unsign,
		print_octal,
		print_hex,
		print_HEX,
		print_S,
		print_pointer,
		print_max_plus
	};

	for (i = 0; i < 13; i++)
	{
		if (c == cs[i])
			return (funcs[i]);
	}
	return (NULL);
}
