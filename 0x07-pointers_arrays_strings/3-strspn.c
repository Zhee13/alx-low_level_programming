#include "main.h"

/**
 * _strspn - main function
 * @s: pointer 1
 * @accept: pointer 2
 *
 * Return: Returns the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unassigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0 ; accept[r] ; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
