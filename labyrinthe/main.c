#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include "levels.h"
#include "path.h"
#include "vérif.h"
#include "replay.h"
#include "menu.h"
#define HAUTEUR 28
#define LARGEUR 65

int menu();
int rejouer();
int path_1();
int path_2();
int path_3();


int main(){
    int start = 0;
    printf("Press 1 to start !\n");
    scanf("%d",&start);
    if(start!=0){
        menu();
    }
}








