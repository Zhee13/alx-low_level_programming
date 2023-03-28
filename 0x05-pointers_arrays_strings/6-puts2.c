#include "main.h"

/**
 * puts2 - to print every other characters
 * @str: parameter
 *
 * Return: 0
 */

void puts2(char *str)
{
	int j;

	for (j = 0 ; str[j] != '\0' ; j++)
	{
		_putchar(str[j]);
		j++
	}
	_putchar('\n');
}
