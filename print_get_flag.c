#include "main.h"

/**
 * get_flag - reutrns the flsg charcter if present
 * @format: the format string
 * @i: the current index of the format string
 *
 * Return: the flag charcater or '\0' if none
 */
char get_flag(const char *format, int i)
{
	char flag = format[i];

	if (flag == '+' || flag == ' ' || flag == '#')
		return (flag);
	return ('\0');
}
