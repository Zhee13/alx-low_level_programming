#include "main.h"

/**
 * print_most_numbers - function to print numbers except 4 & 2
 *
 * Return: always the number
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
	}
}
