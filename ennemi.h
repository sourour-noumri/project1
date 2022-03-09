#ifndef entite_H_INCLUDED
#define entite_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <stdbool.h>
#include <SDL/SDL_image.h>
#include "perso.h"

typedef struct {

	SDL_Surface *entitesec ;
	SDL_Rect pos_entitesec;
	SDL_Rect anim_entitesec[70];
	 
	int direction;
	int maxi_up,maxi_down;

}Ennemi ;


void initEnnemi(Ennemi*e)
void afficherEnnemi(Ennemi e, SDL_Surface * screen)
void animerEnnemi( Ennemi * e)
void deplacer( Ennemi * e)
int collisionBB( personne p, Ennemi e) ou int collisionBB( SDL_Rect posp, SDL_Rect pose)
void deplacerIA( Ennemi * e, SDL_Rect posPerso)

#endif
