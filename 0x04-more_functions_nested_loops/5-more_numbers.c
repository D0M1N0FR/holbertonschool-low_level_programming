#include "main.h"

/**
 * more_numbers - print 10 times the numbers from 0 to 14
 * Description: Can only use _putchar 3 times
 */

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
