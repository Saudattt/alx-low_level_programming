#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: this int is used for the agreement of the function
 *
 * Return: integer value
 *
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	if (x < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}
