#define HAUTEUR 28
#define LARGEUR 65
#include "prototype.h"
//chemin pour niveau 1
int path_1(){
char chemin_1[HAUTEUR][LARGEUR] = {
    "################################",
    "# #      #  # #   #   #   #    #",
    "#oooooo #       #   #   #    # #",
    "######o###### ########### # ## #",
    "#  # oo   #    #    #    #  #  #",
    "#  # o####### ### ### #   #### #",
    "#   #o     #    #ooooooo# #  # #",
    "##   o ### #  ###o# #  o## # ###",
    "#  ##ooo# #  ##  o# #  o #ooooo#",
    "#    # ooooooooooo#   #oooo# #x#",
    "################################"};
    
    int x = 1, y = 1;

    int move_x, move_y;

    initscr();

    noecho();

    cbreak();

    do {
        clear();

        for(int i = 0; i < HAUTEUR; ++i) {
            mvprintw(i, 0, "%s", chemin_1[i]);
        }

        mvprintw(y, x, "@");

        mvprintw(y, x, "");

        refresh();

        move_x = x; move_y = y;

        //fonction permettant au joueur de se déplacer
        switch(getch()) {
            case 'z': move_y = y - 1; break;
            case 's': move_y = y + 1; break;
            case 'q': move_x = x - 1; break;
            case 'd': move_x = x + 1; break;
            //téléporte le joueur une case au dessus de la ligne d'arrivée
            case 't': move_y=8; move_x=30; break;
        };

        if(is_valid(move_x, move_y, HAUTEUR, LARGEUR, chemin_1)) {
            x = move_x; y = move_y;
        }
    } while(! is_finish(x, y, HAUTEUR, LARGEUR, chemin_1));

    refresh();

    clrtoeol();

    refresh();

    endwin();

    rejouer();
}
    
//chemin pour niveau 2
int path_2(){
    char chemin_2[HAUTEUR][LARGEUR] = {
    "############################################",
    "# ooooooo###            ####       ##   ####",
    "# ###  #o   ##### #  ##      ##  #    ##  ##",
    "#   #  #ooo#  #   #  # ##### #### #   ###  #",
    "### ## ## oo#   ########  ####### ######## #",
    "# # ## ####oooooooooooooooooooo#         # #",
    "##  # #   ####################o######### # #",
    "# ## # ##   ###   ### ####ooooo        # # #",
    "##  #######    #     #    o#### ###### # # #",
    "##    #     #   ## ##### #o         ##   # #",
    "##### ######  # #    ##  #o############### #",
    "##         ## #   ####    ooooo#ooooooo #  #",
    "## ########## #   #   ########ooo#### o### #",
    "##             ######           ######oooox#",
    "############################################"};
    
    int x = 1, y = 1;

    int move_x, move_y;

    initscr();

    noecho();

    cbreak();

    do {
        clear();

        for(int i = 0; i < HAUTEUR; ++i) {
            mvprintw(i, 0, "%s", chemin_2[i]);
        }

        mvprintw(y, x, "@");

        mvprintw(y, x, "");

        refresh();

        move_x = x; move_y = y;

        //fonction permettant au joueur de se déplacer
        switch(getch()) {
            case 'z': move_y = y - 1; break;
            case 's': move_y = y + 1; break;
            case 'q': move_x = x - 1; break;
            case 'd': move_x = x + 1; break;
            //téléporte le joueur une case au dessus de la ligne d'arrivée
            case 't': move_y=12; move_x=42; break;
        };

        if(is_valid(move_x, move_y, HAUTEUR, LARGEUR, chemin_2)) {
            x = move_x; y = move_y;
        }
    } while(! is_finish(x, y, HAUTEUR, LARGEUR, chemin_2));

    refresh();

    clrtoeol();

    refresh();

    endwin();

    rejouer();
}

//chemin pour niveau 3
int path_3(){
    char chemin_3[HAUTEUR][LARGEUR] = {
    "################################################################",
    "#  ###oooo#ooo#ooooooo #        ## ooooooooooooo#oooooooooooooo#",
    "#o### o #o#o#o#o#### o#  ##   ##  #o###########oooo###########o#",
    "#oooooo# ooo#o#ooooo#oooo#   #oooooo#         ######ooooooooooo#",
    "# ##### #### o ####o ###o#  ##o#####  ######  #oooooo###########",
    "#           #ooooooo##  o##  #o#      #     # #o#####  ### o o##",
    "# ########## ## ####  ##ooo##oo# #       #  # #ooooooooooooo#o##",
    "#              #        ##oooo## ########## # ###############o##",
    "###############   ###   ###o #              #                o##",
    "#                    ####   #################################o##",
    "############### #         ##oooooooooooooooooooooooooooooooooo #",
    "#         #    #    ########o######################  ######### #",
    "#  #  # ##   #  # ##        oooooooooooooooooooooo #         # #",
    "# #  #   #  #  #    ##############  # ###########o # # # #    ##",
    "# #  ##    # #  # ##              # # #        ooo##  ##  ###  #",
    "#  # #  # #  # #   ######### ##  # #########o#   ## # #     #",
    "#   ###############  #        #  #  # # #      oo# #   #  #### #",
    "#                  # #   ####  # #   #  # ######o# # # ####### #",
    "#  # # # # # # # # # # ######### # #     #     #o# #  #       ##",
    "# # # # # # # # # ## #           # # ###   # ## o#  ########## #",
    "#                  #  ### o######  # #     #   #o#  #ooooooooo##",
    "# ##  ##  ##  ##  #      #          # # #  ## ###o####o#######oo#",
    "#   ##  ##  ##  ## ##### #    #####  # #########oooooo       #x#",
    "################################################################"};
    
    int x = 1, y = 1;

    int move_x, move_y;

    initscr();

    noecho();

    cbreak();

    do {
        clear();

        for(int i = 0; i < HAUTEUR; ++i) {
            mvprintw(i, 0, "%s", chemin_3[i]);
        }

        mvprintw(y, x, "@");

        mvprintw(y, x, "");

        refresh();

        move_x = x; move_y = y;

        //fonction permettant au joueur de se déplacer
        switch(getch()) {
            case 'z': move_y = y - 1; break;
            case 's': move_y = y + 1; break;
            case 'q': move_x = x - 1; break;
            case 'd': move_x = x + 1; break;
            //téléporte le joueur une case au dessus de la ligne d'arrivée
            case 't': move_y=21; move_x=62; break;
        };

        if(is_valid(move_x, move_y, HAUTEUR, LARGEUR, chemin_3)) {
            x = move_x; y = move_y;
        }
    } while(! is_finish(x, y, HAUTEUR, LARGEUR, chemin_3));

    refresh();

    clrtoeol();

    refresh();

    endwin();

    rejouer();
}
