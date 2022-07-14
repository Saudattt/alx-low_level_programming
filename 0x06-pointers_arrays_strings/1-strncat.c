#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates n bytes of two strings
 * @dest: first param
 * @src: second param
 * @n: number of bytes
 * Return: a string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
