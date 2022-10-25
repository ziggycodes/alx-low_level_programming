#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointer
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + 1);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
