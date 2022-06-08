#include "main.h"

/**
 * print_alphabet - print the alphabet in small caps
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char v = 'a';

	while (v <= 'z')
	{
		_putchar(v);
		v++;
	}
	_putchar('\n');
}
