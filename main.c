#include "fonctions.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]){
    int taille = 20;
    int x = 0;
    int y = 0;
    int nbCellules = 0;
    Cellule* tblCellules = NULL;
    
    for (int i = 2; i < argc; i+=2){
        nbCellules = placerCellule(tblCellules, nbCellules, (int)argv[i-1], (int)argv[i]);
    }

    while (nbCellules){
        nbCellules = deplacements(tblCellules, nbCellules, x, y, taille);
        afficher(tblCellules, nbCellules, x, y, taille);
    }

    return 0;
}