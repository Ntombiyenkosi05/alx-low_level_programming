#include "main.h"
/**
 * _isalpha - Checks for alpharic charecter
 * @c: The charecter to be checked
 * Return: 1 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
