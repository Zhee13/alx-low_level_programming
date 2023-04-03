#include "main.h"

/**
 * *_memset - main function
 * @s: pointer
 * @b: character
 * @n: integer
 *
 * Return: Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0 ; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
