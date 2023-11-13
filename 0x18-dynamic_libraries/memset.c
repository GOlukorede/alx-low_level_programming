# include "main.h"
# include <string.h>

/**
 *_memset-fills memory with a constant byte
 *@s: memory address where to set the value
 *@b: the value itself
 *@n: number of bytes to set the value
 *Return: pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}

	return (s);
}
