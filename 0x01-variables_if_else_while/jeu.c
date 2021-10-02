#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int nombre, nombreMystere;
	const int MIN = 1, MAX = 100;

	srand(time(NULL));
	nombreMystere = (rand() % (MAX - MIN)) + MIN;

	do
	{
		printf("Quel est le nombre mystere ?\n");
		scanf("%d", &nombre);

		if (nombre > nombreMystere)
			printf("C'est moins !\n");
		else if (nombre < nombreMystere)
			printf("C'est plus !\n");
		else
			printf("Vous avez trouve le nombre mystere !!!\n");
	} while (nombre != nombreMystere);

	return (0);
}