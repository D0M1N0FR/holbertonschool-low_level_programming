#include <stdio.h>

int main(void)
{
	char c = 'a';

	if (c <= 'z' && c != 'q' && c != 'e')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}

