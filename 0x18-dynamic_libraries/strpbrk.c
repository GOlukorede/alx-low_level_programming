# include "main.h"
# include <string.h>

/**
 * _strpbrk- function that searches a string for any of a set of bytes
 * @s: input string pointer
 * @accept: string to search for match
 * Return: Null if no match and pointer for match
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}

	return (0);
}
