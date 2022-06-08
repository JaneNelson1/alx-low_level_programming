#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: 0
 */
void times_table(void)
{
	int k = 0;
	int l, m;

	while (k < 10)
	{
	l = 0;
	while (l < 10)
	{
		m = k * l;
		if (m < 9)
		{
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
		}
		else if (l != 0)
		{
			_putchar(' ');
			_putchar(m + '0');
		}
		else
		{
			_putchar(m + '0');
		}

		if (l != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		l++;

	}
	_putchar('\n');
	k++;
	}
}
