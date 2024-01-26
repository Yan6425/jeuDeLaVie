#ifndef __fonctions_H_
#define __fonctions_H_

typedef struct cellule {
    struct cellule **voisines;
    int x;
    int y;
} *Cellule;


int placerCellule(Cellule* tblCellules, int nbCellules, int x, int y);
void trouverVoisins(Cellule* tblCellules, int nbCellules, int iCellule);
int deplacements(Cellule* tblCellules, int nbCellules);
void afficher(Cellule* tblCellules, int nbCellules, int x, int y, int taille);
int** initTbl(int taille);
void remplirTbl(int** tbl, Cellule* tblCellules, int nbCellules, int x, int y);


#endif