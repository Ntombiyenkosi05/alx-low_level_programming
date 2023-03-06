#include "main.h"
#include <stdio.h>
/**
 * _strchr - Locates a character in a string
 * @s: Input
 * @c: Input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + 1);
	}
	return (NULL);
}
