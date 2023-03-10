#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: memory area that stores copies
 * @src: Source memory area
 * @n: bytes
 * Return: Always 0 (Success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
