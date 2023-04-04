#include "main.h"

/**
 * *_strchr - main function
 * @s: pointer
 * @c: character
 *
 * Return: always 0 at success
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
