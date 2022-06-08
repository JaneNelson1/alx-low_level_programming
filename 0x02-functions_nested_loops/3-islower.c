#include "main.h"

/**
 * _islower - check for lowercase characters
 * @c: this is an integer
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
		return (0);
}
