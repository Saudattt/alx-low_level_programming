#include <stdio.h>

/**
 * main- numbers of base 10
 *
 * Return: 0 if successful
 *
 */

int main(void)
{
	int var;

	for (var = 0; var < 10; var++)
		putchar((var % 10) + '0');

	putchar('\n');

	return (0);
}
