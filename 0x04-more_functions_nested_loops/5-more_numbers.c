#include "main.h"

/**
 * more_numbers - to print numbers ten times
 *
 * Return: the number
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 0 ; j <= 14 ; j++)
		{
			if (i > 9)
			{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
