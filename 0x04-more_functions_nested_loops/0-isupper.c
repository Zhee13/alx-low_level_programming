#include "main.h"

/**
 * _isupper - function is to check for uppercase
 * @c: integer
 *
 * Return: return 1 for uppercase else 0
 */

int _isupper(int c)
{
	if (c >= 65 && c  <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
