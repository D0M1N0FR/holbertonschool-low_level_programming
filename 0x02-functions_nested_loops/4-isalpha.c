#include "main.h"

/**
 * _isalpha - check the code
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