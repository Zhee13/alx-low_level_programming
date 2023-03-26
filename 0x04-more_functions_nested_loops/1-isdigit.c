#include "main.h"

/**
 * _isdigit - function to check for digits
 * @c: digit
 *
 * Return: return 1 if c is a digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
