# include "main.h"
# include <string.h>

/**
 *_strncpy- copies n bytes of a string
 *@dest: destination of string
 *@src: source of string
 *@n: number of bytes to copy
 *Return: always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
