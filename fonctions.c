#include "fonctions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int placerCellule(Cellule* tblCellules, int nbCellules, int x, int y){
    tblCellules = realloc((nbCellules + 1) * sizeof(Cellule));
    tblCellules[nbCellules].x = x;
    tblCellules[nbCellules].y = y;
    nbCellules++;
    trouverVoisins(tblCellules, nbCellules, iCellule);
    return nbCellules;
}


void trouverVoisins(Cellule* tblCellules, int nbCellules, int iCellule){
    int x = tblCellules[iCellule].x;
    int y = tblCellules[iCellule].y;
    for (int i = 0; i < nbCellules, i++){
        if (i = iCellule){break;}
        Cellule cellule = tblCellules[i];
    }
}


int deplacements(Cellule* tblCellules, int nbCellules);
void afficher(Cellule* tblCellules, int nbCellules, int x, int y, int taille);
int** initTbl(int taille);
void remplirTbl(int** tbl, Cellule* tblCellules, int nbCellules, int x, int y);
