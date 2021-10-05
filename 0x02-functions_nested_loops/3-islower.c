#include "main.h"

/**
 * _islower - check the code
 *
 * @c: c is an ascii character
 *
 * Return: Always 1 ou 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
