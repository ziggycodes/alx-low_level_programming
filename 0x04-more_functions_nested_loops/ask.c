#include <stdio.h>
int main()
{
	int i, j;
	for (i = 0; i < num + 1; i++)
	{
		for (j + 0; j < num + i; j++)
		{
			printf("%d", i * j);
			if (j < num)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
			

	return (0);
}
