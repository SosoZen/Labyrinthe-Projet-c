#define HAUTEUR 28
#define LARGEUR 65

//niveau 1
int level_1() {
    char grille[HAUTEUR][LARGEUR] = {
    "################################",
    "# #      #  # #   #   #   #    #",
    "#       #       #   #   #    # #",
    "###### ###### ########### # ## #",
    "#  #      #    #    #    #  #  #",
    "#  #  ####### ### ### #   #### #",
    "#   #      #    #       # #  # #",
    "##     ### #  ### # #   ## # ###",
    "#  ##   # #  ##   # #    #     #",
    "#    #            #   #    # #x#",
    "################################"};
    
    int x = 1, y = 1;

    int move_x, move_y;

    initscr();

    noecho();

    cbreak();

    do {
        clear();

        for(int i = 0; i < HAUTEUR; ++i) {
            mvprintw(i, 0, "%s", grille[i]);
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
            //affiche le chemin vers la ligne d'arrivée
            case 'p': path_1();
            //téléporte le joueur une case au dessus de la ligne d'arrivée
            case 't': move_y=8; move_x=30; break;
        }

        if(is_valid(move_x, move_y, HAUTEUR, LARGEUR, grille)) {
            x = move_x; y = move_y;
        }
    } while(! is_finish(x, y, HAUTEUR, LARGEUR, grille));

    refresh();

    clrtoeol();

    refresh();

    endwin();

    rejouer();
}


//niveau 2
int level_2() {
    char grille[HAUTEUR][LARGEUR] = {
    "############################################",
    "#        ###            ####       ##   ####",
    "# ###  #    ##### #  ##      ##  #    ##  ##",
    "#   #  #   #  #   #  # ##### #### #   ###  #",
    "### ## ##   #   ########  ####### ######## #",
    "# # ## ####                     #        # #",
    "##  # #   #################### ######### # #",
    "# ## # ##   ###   ### ####             # # #",
    "##  #######    #     #     #### ###### # # #",
    "##    #     #   ## ##### #          ##   # #",
    "##### ######  # #    ##  # ############### #",
    "##         ## #   ####         #        #  #",
    "## ########## #   #   ########   ####  ### #",
    "##             ######           ######    x#",
    "############################################"};
    
    int x = 1, y = 1;

    int move_x, move_y;

    initscr();

    noecho();

    cbreak();

    do {
        clear();

        for(int i = 0; i < HAUTEUR; ++i) {
            mvprintw(i, 0, "%s", grille[i]);
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
            //affiche le chemin vers la ligne d'arrivée
            case 'p': path_2();
            //téléporte le joueur une case au dessus de la ligne d'arrivée
            case 't': move_y=12; move_x=42; break;
        };

        if(is_valid(move_x, move_y, HAUTEUR, LARGEUR, grille)) {
            x = move_x; y = move_y;
        }
    } while(! is_finish(x, y, HAUTEUR, LARGEUR, grille));

    refresh();

    clrtoeol();

    refresh();

    endwin();

    rejouer();
}

//niveau 3
int level_3() {
    char grille[HAUTEUR][LARGEUR] = {
    "################################################################",
    "#  ###    #   #        #        ##              #              #",
    "# ###   # # # # ####  #  ##   ##  # ###########    ########### #",
    "#      #    # #     #    #   #      #         ######           #",
    "# ##### ####   ####  ### #  ## #####  ######  #      ###########",
    "#           #       ##   ##  # #      #     # # #####  ###    ##",
    "# ########## ## ####  ##   ##  # #       #  # #             # ##",
    "#              #        ##    ## ########## # ############### ##",
    "###############   ###   ###  #              #                 ##",
    "#                    ####   ################################# ##",
    "############### #         ##                                   #",
    "#         #    #    ######## ######################  ######### #",
    "#  #  # ##   #  # ##                               #         # #",
    "# #  #   #  #  #    ##############  # ###########  # # # #    ##",
    "# #  ##    # #  # ##              # # #          # #  ##  ###  #",
    "#  # #  # #  #    #   ######### ## # # ######## #  ## # #      #",
    "#   ##############   #         # #  # # #        # #   #  #### #",
    "#                  # #   ####  # #   #  # ###### # # # ####### #",
    "#  # # # # # # # # # # ######### # #     #     # # #  #        #",
    "# # # # # # # # # ## #           # # ###   # ##  #  ########## #",
    "#                  #  ### #######  # #     #   # #            ##",
    "# ##  ##  ##  ##  #      #         # # #  ## ### ############  #",
    "#   ##  ##  ##  ## ##### #    #####  # ######### #           #x#",
    "################################################################"};
    
    int x = 1, y = 1, g = getch();

    int move_x, move_y;

    initscr();

    noecho();

    cbreak();

    do {
        clear();

        for(int i = 0; i < HAUTEUR; ++i) {
            mvprintw(i, 0, "%s", grille[i]);
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
            //affiche le chemin vers la ligne d'arrivée
            case 'p': path_3();
            //téléporte le joueur une case au dessus de la ligne d'arrivée
            case 't': move_y=21; move_x=62; break;
        }

        if(is_valid(move_x, move_y, HAUTEUR, LARGEUR, grille)) {
            x = move_x; y = move_y;
        }
    } while(! is_finish(x, y, HAUTEUR, LARGEUR, grille));

    refresh();

    clrtoeol();

    refresh();

    endwin();

    rejouer();
}