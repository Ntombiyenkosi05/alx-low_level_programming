#include "main.h"
/**
 * _isdigit - Checks if a charecter is a digit
 * @x: The number to be checked
 * Return: 1 for a charecter that will be a digit, else 0 for any
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 58)
	{
		return (1);
	}
	return (0);
}
