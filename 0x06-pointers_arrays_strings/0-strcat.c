#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: a pointer to a character that is to be changed
 * @src: pointer to a character that will also be changed
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}