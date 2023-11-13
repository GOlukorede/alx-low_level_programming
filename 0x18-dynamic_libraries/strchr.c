# include "main.h"
# include <string.h>

/**
 * _strchr- function that locates a character in a string
 * @s: input string
 * @c: the character of interest
 * Return: pointer to the 1st occurrence of 'c'
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
