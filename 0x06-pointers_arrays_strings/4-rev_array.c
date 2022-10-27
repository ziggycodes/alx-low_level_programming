#include "main.h"
/**
 * reverse_array - reverses the content of an array of intergers
 * @a: an array of intergers
 * @n: number of elements of the array
 * Return: returns void
 */

void reverse_array(int *a, int n)

{
	int *start_c, *end_c, c;
	int i;


	start_c = a;
	end_c = a;


	for (i = 0; i < n - i; i++)
	{
		end_c++;
	}

	for (i = 0; i < n / 2; i++)
	{
		c = *end_c;
		*end_c = *start_c;
		*start_c = c;

		start_c++;
		end_c--;
	}

}
