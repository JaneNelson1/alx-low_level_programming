#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet in small caps *10
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char v = 'a';
	int j = 1;

	while (j <= 10)
	{
	while (v <= 'z')
	{
		_putchar(v);
		v++;
	}
	_putchar('\n');
	j++;
	}
}
