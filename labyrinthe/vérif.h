#include "prototype.h"
//fonction pour verifier si le joueur ne se dirige pas vers un mur
int is_valid(int x, int y, int hauteur, int largeur, char grille[hauteur][largeur]) {
    return (grille[y][x] != '#');
}

//fonction pour verifier si le joueur a atteint la ligne d'arrivée
int is_finish(int x, int y, int hauteur, int largeur, char grille[hauteur][largeur]) {
    return (grille[y][x] == 'x');
    // return 0;
}
