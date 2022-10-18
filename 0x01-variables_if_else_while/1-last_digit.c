#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last difit of tbe random
 * number stored in the variable n
 * Return: Always 0 (Success_
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d", n, n % 10);
	if (n % 10 > 5)
		printf("and is greater than 0/n");
	else if (n % 10 == 0)
	       printf("and is 0/n");
	else if (n % 10 < 0 && n % 10 != 0)
		printf("and is less than 0 and not 0/n");
	return (0);
}	
	
