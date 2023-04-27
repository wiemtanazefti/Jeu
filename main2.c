#include <stdio.h>
#include <stdlib.h>
#include "enigme.h"

int main()
{
	SDL_Surface *ecran;
	SDL_Event event;
	Enigme e;
	int boucle = 1;
	int scene = 1;
	genererEnigme(&e, "Data/questions.txt", "Data/reponses.txt", "Data/vraireponses.txt");

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		fprintf(stderr, "Echec d'initialisation de SDL.\n");
		return 1;
	}

	ecran = SDL_SetVideoMode(800, 600, 32, SDL_HWSURFACE | SDL_DOUBLEBUF);

	while (boucle == 1)
	{
		boucle = jouerEnigme(&e, ecran);
	}

	SDL_Quit();
	exit(0);
	return EXIT_SUCCESS;
	return 0;
}
