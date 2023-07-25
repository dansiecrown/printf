#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_S - prints a string arguments with non-printable characters in hex
 * @args: the list of arguments
 *
 * Return: the number of bytes printed
 */
int print_S(va_list args)
{
	char *s = va_arg(args, char *);
	int i, len, count = 0;
	char hex[] = "0123456789ABCDEF";

	if (s == NULL)
		s = "(null)";
	len = _strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] > 0 && s[i] < 32)
		{
			_putchar('\\');
			_putchar('x');
			_putchar(hex[s[i] / 16]);
			_putchar(hex[s[i] % 16]);
			count += 4;
		}
		else if (s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			_putchar(hex[s[i] / 16]);
			_putchar(hex[(s[i] % 16) + 1]);
			count += 4;
		}
		else
		{
			_putchar(s[i]);
			count++;
		}
	}

	return (count);
}
