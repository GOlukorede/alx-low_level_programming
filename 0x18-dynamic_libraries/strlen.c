# include "main.h"
# include <string.h>
/**
 *_strlen- returns the length of a string
 *@s: a string variable
 *Return: 0
 */
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
		n++;

	return (n);
}
