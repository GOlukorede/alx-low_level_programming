# include "main.h"
/**
 *_isdigit- prints out digits from 0 9
 *@c: character in ASCII code
 *Return: 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
