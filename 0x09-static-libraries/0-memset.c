#incude "main.h"
/**
 * _memset - the -memset() function fills the first n
 * bytes of the memory area pointed to by s with the cinstant byte b
 *  @s: target
 *  @b: constant byte
 *  @n: numbeer of byte
 *  Return: returns new value of trget
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
