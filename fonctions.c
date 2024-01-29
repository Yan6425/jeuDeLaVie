#include "fonctions.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int placerCellule(Cellule* tblCellules, int nbCellules, int x, int y){
    tblCellules = realloc((nbCellules + 1) * sizeof(Cellule));
    tblCellules[nbCellules]->x = x;
    tblCellules[nbCellules]->y = y;
    nbCellules++;
    trouverVoisines(tblCellules, nbCellules, iCellule);
    return nbCellules;
}


void trouverVoisines(Cellule* tblCellules, int nbCellules, int iCellule){
    int x = tblCellules[iCellule]->x;
    int y = tblCellules[iCellule]->y;
    tblCellules[iCellule]->voisines = malloc(3 * sizeof(*Cellule));
    for (int = 0; i < 3; i++){
        tblCellules[iCellule]->voisines[i] = malloc(3 * sizeof(Cellule));
    }
    for (int i = 0; i < nbCellules; i++){
        for (int j = -1; j <= 1; j++){
            for (int h = -1; h <=1; h++){
                if (!j && !h){break;}
                Cellule cellule = tblCellules[i];
                if (cellule->x - x == j && cellule->y - y == h){
                    tblCellules[iCellule]->voisines[j][h] = cellule; 
                }
            }
        }
    }
}


int deplacements(Cellule* tblCellules, int nbCellules);
void afficher(Cellule* tblCellules, int nbCellules, int x, int y, int taille);
int** initTbl(int taille);
void remplirTbl(int** tbl, Cellule* tblCellules, int nbCellules, int x, int y);
