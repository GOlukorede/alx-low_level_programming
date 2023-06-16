#include <stdio.h>
/**
 * main - Print all single digit numbers starting from 0
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	
	for(i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);	
}
