#include "main.h"

/**
 * puts_half - to print half of the string
 * @str: parameter
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i;
	int count = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	if (i % 2 == 0)
	{
		for (i = count / 2 ; str[i] != '\0' ; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else if (i % 2 != 0)
	{
		for (i = count
	}
}
