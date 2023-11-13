# include "main.h"
# include <string.h>

/**
 *_strcpy- copies the string pointed to by src
 *@dest: destination
 *@src: source
 *Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int len, m;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (m = 0; m < len; m++)
	{
		dest[m] = src[m];
	}
	dest[m] = '\0';

	return (dest);
}
