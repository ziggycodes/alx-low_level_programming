#include "main.h"
#include <stddef.h>
/**
 * _strchr - returns a pointer to the firsts occurence
 * of the character c in the string s, or NULL if the
 * character is not found
 *
 * @s: string targeted
 * @c: character targeted
 *
 * Return: returns pointer to the first occurence of c/
 */
char *_strchar(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
			;
			if (s[i] == c)
			return (s + i);
			else
			return (NULL);
			}
