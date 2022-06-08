#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @j:is an integer type
 * Return: the value of the last digit
 */
int print_last_digit(int j)
{
	int a;

	if (j < 0)
	{
		a = -1 * (j % 10);
		_putchar(a + '0');
		return (a);
	}
	else
	{
		a = j % 10;
		_putchar(a + '0');
		return (a);
	}
}

