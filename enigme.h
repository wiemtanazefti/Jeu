#ifndef ENIGME_H_INCLUDED
#define ENIGME_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>

typedef struct
{

	SDL_Surface *background[2];
	SDL_Surface *time[11];
	SDL_Surface *boutons[5];
	SDL_Surface *win;
	SDL_Surface *lost;
	SDL_Surface *reponses[5];
	SDL_Surface *question;

	SDL_Rect posRepones[5];
	SDL_Rect posQuestion;

	int choix_question;

	// image choisie
	int image_courrante;

	// position de vrai reponse
	int positionVraiReponse;
	
	int sec;

} Enigme;

void genererEnigme(Enigme *e, char *questions, char *reponse, char *vreponse);

void afiicherEnigme(Enigme *e, SDL_Surface *ecran);

int VerifierEnigme(Enigme *e, SDL_Surface *ecran);

int jouerEnigme(Enigme *e, SDL_Surface *ecran);

void Free_Enigme(Enigme *e);

#endif
