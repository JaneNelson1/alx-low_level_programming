#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: value to be evaluated
 * @b: value to be evaluated
 * Return: return void
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
