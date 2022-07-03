#include "prototype.h"
//menu demandant au joueur s'il veut rejouer en choisissant entre Y et N (pour oui et non)
int rejouer(){
    system("clear");
    char choix;
    printf("vous avez fini en %d pas",compteur);
    printf("Play again ? : \nY : Yes \nN : No \n");
    scanf("%s", &choix);
    if(choix== 'Y' || choix== 'y'){
        menu();
    }else if(choix== 'N' || choix== 'n'){
        exit(EXIT_SUCCESS);
    }else rejouer();
    
}
