#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: THe string to measure
 *
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
