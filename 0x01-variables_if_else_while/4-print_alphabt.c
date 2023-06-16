#include <stdio.h>
/**
 * main - Print all alphabet except q and e
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	char alpha[24] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(alpha[i]);
	}
	putchar('\n');

	return (0);
}
