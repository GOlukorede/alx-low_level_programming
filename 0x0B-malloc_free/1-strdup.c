#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
char *space;
int i, j;
j = 0;
if (str == NULL)
return (NULL);
while (str[j] != '\0')
	j++;
space = malloc(sizeof(char) * (j + 1));
if (space == NULL)
	return (NULL);
for (i = 0; str[i]; i++)
{
space[i] = str[i];
}
return (space);
}
