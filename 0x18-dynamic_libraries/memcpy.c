# include "main.h"
# include <string.h>

/**
 * _memcpy- copies memory area
 * @dest: destination pointer
 * @src: source pointer
 * @n: number of bytes to copy
 * Return: a pointer to destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}

	return (dest);
}
