#include "main.h"

/**
 * *_strncpy - main function
 * @dest: parameter
 * @src: source string
 * @n: integer
 *
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
