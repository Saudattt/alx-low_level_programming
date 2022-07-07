#include <ctype.h>
#include "main.h"

/**
 * _isdigit - check if a var is digit
 * @var: variable to be checked
 *
 * Return: 1 if successful
 */

int _isdigit(int var)
{
	if (isdigit(var))
		return (1);
	return (0);
}
