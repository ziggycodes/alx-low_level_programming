#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @: input 1
 * @bL input 2
 * Return: integers
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
