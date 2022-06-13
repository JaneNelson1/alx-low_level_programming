#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: argument to the function
 *
 * Description: return the required result
 *
 * Return: void
 *
 */
void print_rev(char *s)
{
	int length;
	int len;

	for (length = 0; s[length] != '\0'; len++)
	{
	}
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
