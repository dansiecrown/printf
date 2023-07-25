#include "main.h"

/**
 * get_len - return the length modifier of present
 * @format: the foramt string
 * @i: the current index of the format string
 *
 * Return: the length modifier or '\0' if none
 */
char get_len(const char *format, int i)
{
	char len = format[i];

	if (len == 'l' || len == 'h')
		return (len);
	return ('\0');
}
