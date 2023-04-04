#include "main.h"

/**
 * *_memcpy - main function
 * @dest: destination
 * @src: source
 * @n: integer
 *
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int g = n;

	for (; i < g ; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
