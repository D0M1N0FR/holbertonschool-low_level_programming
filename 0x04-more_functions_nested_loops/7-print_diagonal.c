#include "main.h"

/**
 * print_diagonal - draws diagonal line
 * @n: number of times
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int line = 0;
	int spaces;

	if (n > 0)
	{
		while (line < n)
		{
			_putchar('\n');
			for (spaces = 0; spaces < line; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('$');
			line++;
		}
	}
	else
	{
		_putchar('\n');
		_putchar('$');
		_putchar('\n');
	}
}

int main(void)
{
	print_diagonal(0);
	print_diagonal(2);
	print_diagonal(10);
	print_diagonal(-4);
	return (0);
}
