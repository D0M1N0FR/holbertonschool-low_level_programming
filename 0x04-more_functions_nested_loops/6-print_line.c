#include "main.h"

/**
 * print_line - prints a line of _ n long
 * @n: length of line
 *
 * Return: void
 */

void print_line(int n)
{
	int a = 0;

	while (a < n)
	{
		_putchar('_');
		a++;
	}

	_putchar('\n');
}
