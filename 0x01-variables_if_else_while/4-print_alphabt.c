#include <stdio.h>
#include <stdlib.h>

/**
 * main- alphabets in lower case except q and e
 *
 * Return: 0 if successful
 *
 */

int main(void)
{
	char var;

	for (var = 'a'; var <= 'z'; var++)
	{
		if (var == 'e' || var == 'q')
			continue;

		putchar(var);
	}
	putchar('\n');

	return (0);
}
