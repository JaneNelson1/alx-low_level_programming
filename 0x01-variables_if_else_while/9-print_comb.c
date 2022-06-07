#include <stdio.h>

/**
 * main -all program
 *
 * Description: Print all possible combinations of single-digit numbers
 *
 * Return: 0
 *
 */
int main(void)

{
int numbers;

for (numbers = 0; numbers <= 9; numbers++)
{
putchar(numbers + '0');
if (numbers < 9)
{
putchar(',');
putchar(' ');
		}
}
putchar('\n');
return (0);
}
