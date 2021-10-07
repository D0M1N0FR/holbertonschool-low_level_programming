#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: length of sides minus hypotenuse
 *
 * Return: void
 */

void print_triangle(int size)
{
	int line = 0;
	int spaces;
	int hashes;

	if (size > 0)
	{
		while (line < size)
		{
			for (spaces = size - 1; spaces > line; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 0; hashes < line + 1; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
			line++;
		}
	}
	else
		_putchar('\n');
}

int main(void)
{
	print_triangle(2);
	print_triangle(10);
	print_triangle(1);
	print_triangle(0);
	return (0);
}
