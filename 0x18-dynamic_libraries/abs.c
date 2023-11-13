# include "main.h"
/**
 * _abs- computes the absolute value of an integer
 * @a: input number of an integer
 * Return: always 0
 */
int _abs(int a)
{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		return (a * -1);
	}
}
