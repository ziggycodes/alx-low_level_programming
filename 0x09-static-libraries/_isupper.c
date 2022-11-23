#include "main.h"
/**
 * _isupper - function toveerify if character is uppercase
 * @c: tested character
 * Return: returns 1 if it is uppercase, 0 if it is not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}
