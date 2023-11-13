# include "main.h"
# include <string.h>

/**
 *_strcat- function that concatenates two strings
 *@dest: destination of the string
 *@src: source of the string
 *Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i, c;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[i] = src[c];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
