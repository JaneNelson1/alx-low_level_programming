#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l, m, n, next;

	m = 1;

	n = 2;

	for (l = 1; l <= 50; ++l)
	{
		if (m != 20365011074)
		{
			printf("%1d, ", m);
		}
		else
		{
			printf("%1d\n", m);
		}
		next = m + n;
		m = n;
		n = next;
	}

	return (0);
}