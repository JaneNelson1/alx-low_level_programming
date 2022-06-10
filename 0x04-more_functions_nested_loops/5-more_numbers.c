#include "main.h"

/**
 * more_numbers - print 10 times the numbers
 * from 0 to 14, followed by a new line
 *
 * Return: 0
 */
void more_numbers(void)
{
	int l;
	int m;

	for (m = 0; m < 10; m++)
	{
		for (l = 0; l <= 14; l++)
			if (l >= 10)
			{
				_putchar((l / 10) + '0');
			}
		_putchar((l % 10) + '0');
	}
}
