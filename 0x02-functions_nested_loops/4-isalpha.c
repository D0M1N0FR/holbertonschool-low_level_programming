#include "main.h"

/**
 * _isalpha - check the code
 *
 * @c: c is an ascii character
 *
 * Return: Always 1 ou 0.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
