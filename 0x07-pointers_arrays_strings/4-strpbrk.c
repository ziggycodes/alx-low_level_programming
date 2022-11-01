#include "main.h"

/**
 * _strpbrk - matches any character specified
 * @s: the main c string to be scanned
 * @accept: character in str1 that matches one of characters to match in string
 * Return: string s that matches any character specified in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}

			j++;
		}

		s++;
	}
	return (0);
}
