#include "main.h"

/**
 * main - prints a string "_putchar"
 *
 * Return: 0
 */

int main(void)
{
	int i;
	char m[] = "_putchar";

	int _putchar(char c);

	for (i = 0; i < 8; i++)
	{
		_putchar(m[i]);
	}
	_putchar('\n');
	return (0);
}
