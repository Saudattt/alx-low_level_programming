#include <stdio.h>
#include <stdlib.h>

/**
 * main- Letters in lowercase and then uppercase
 *
 * Return: 0 if successful
 *
 */

int main(void)
{
	char var;
	char var1;

	for (var = 'a'; var <= 'z'; var++)
	{
		putchar(var);
	}

	for (var1 = 'A'; var1 <= 'Z'; var1++)
	{
		putchar(var1);
	}
	putchar('\n');

	return (0);
}
