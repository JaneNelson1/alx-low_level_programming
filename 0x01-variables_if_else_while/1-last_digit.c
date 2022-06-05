#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k;
	int L;
	char str[] = "last digit of";

	srand(time(0));
	k = rand() - RAND_MAX / 2;
	L = k % 10;

	if (L > 5)
		printf("%s %d is %d and is greater than 5\n", str, k, L);
	else if (L == 0)
		printf("%s %d is %d and is 0\n", str, k, L);
	else if (L < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", str, k, L);
	return (0);
}
