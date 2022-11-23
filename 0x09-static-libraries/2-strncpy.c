#include "main.h"
/**
 * _strncpy - C function that copies a string, including the
 * terminating null byte, using at most an inputted number of bytes.
 * If the length of the source string is less than the max byte number,
 * the remainder of the destination sttring is filled with null bytes
 * Works identically to the standard library function 'strncpy'
 * @dest; buffer storing the string copy
 * @src: the source sttring
 * @n: max number of byte coopied
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++0
			dest[i] = '\0';

			return (dest);
			}
