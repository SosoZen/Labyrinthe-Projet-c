#include "prototype.h"
int menu(){
    system("clear");
    int choixdifficulte = 0;
    printf("Chose a difficulty :\n");
    printf("Level 1 (Small)                     : 1\n");
    printf("Level 2 (Medium)                    : 2\n");
    printf("Level 3 (Large)                     : 3\n");
    scanf("%d",&choixdifficulte);
    if(choixdifficulte==1){
        level_1();
    }
    if(choixdifficulte==2){
        level_2();
    }
    if(choixdifficulte==3){
        level_3();
    }
}
