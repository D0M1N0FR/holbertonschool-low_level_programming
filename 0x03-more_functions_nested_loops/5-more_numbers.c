#include "main.h"

void more_numbers(void)
{
	int i = 0, c = 0;

	while (i < 10)
	{
		if (c < 14)
		{
			_putchar(c + '0');
			c++;
		}
		i++;
	}
}
