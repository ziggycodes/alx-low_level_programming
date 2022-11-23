#include "main.h"
/**
 * _memcpy - the -memcpy() function copies n bytes
 * from memory area src to memory area dest
 * @dest: area wheere bytes are copied to
 * @src: area where bytes re copied from
 * @n: number of bytes to copy
 * Return: returns a poiner to n
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
