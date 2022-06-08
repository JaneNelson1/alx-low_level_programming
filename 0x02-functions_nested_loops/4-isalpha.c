#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: this is an integer
 * Return: 1 if lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
		return (0);
}
