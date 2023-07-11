#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *s;
int length;
int k;
int i, j;
i = 0;
j = 0;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
while (s1[i] != '\0')
	i++;
while (s2[j] != '\0')
	j++;
length = i + j + 1;
s = malloc(sizeof(char) * length);
if (s == NULL)
	return (NULL);
for (k = 0; k < i; k++)
	s[k] = s1[k];
for (k = 0; k < j; k++)
	s[i + k] = s2[k];
s[length - 1] = '\0';
	return (s);
}
