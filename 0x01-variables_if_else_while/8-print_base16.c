#include <stdio.h>
/**
 * main - all codes
 *
 * Description: Printing numbers in lower case
 *
 * Return: 0
 *
 */

int main(void)
{
char numbers;

for (numbers = '0'; numbers <= '9'; numbers++)
putchar (numbers);

for (numbers = 'a'; numbers <= 'f'; numbers++)
putchar (numbers);

putchar('\n');

return (0);

}
