#include "main.h"
/**
 * _strcmp - Compares two pointers to two strings
 * @s1: The pointer to the first string to be compared
 * @s2: The pointer to the second string to be compared
 * Return: if str1 < str2, the negative diff of the first unmached characters
 * if str1 == str2, 0.
 * if str1 > str2, the positive diff of the first unmached characters.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

