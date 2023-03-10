#include "main.h"
/**
 * _islower - Checks for lowercase charecters
 * @c: The charecter to be checked
 * Return: 1 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
