#include "main.h"

/**
 * print_rev - to print string in reverse
 * @s: parameters
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int i;
	int length = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		length++;
	for (i = length ; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
