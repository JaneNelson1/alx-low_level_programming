#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int sum, num;

	num = 1;
	sum = 0;
	while (num < 1024)
	{
		if (num % 3 == 0)
		{
			sum = sum + num;
		}
		else if (num % 5 == 0)
		{
			sum = sum + num;
		}
		num++;
	}
	printf("%d\n", sum);
	return (0);
}
