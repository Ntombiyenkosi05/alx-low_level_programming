#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: Pointed destination
 * @b: Constant byte
 * @n: byte
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
