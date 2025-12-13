#include <stdio.h>
// #include <stddef.h>
// #include <stdlib.h>
// #include <stdarg.h>
#include "../libs/add/addition.h"
#include "../libs/fact/factoriel.h"


int main(int argc, char * argv [] )
{


    puts("**** utilisation des arguments passées à une fonction ****");
    for (int i = 0; i < argc;i++){
        //cettte fonction affiche les différents arguments passés à la fonction
        printf("Argument à l'index %2d == %s\n", i, argv[i]);
    }

        puts("**** calcul factoriel ****");
    printf("factoriel de 5 = %d \n", factoriel(5));
    printf("factoriel de 4 = %d \n", factoriel(4));
    
    
    puts("**** somme dynamique****");
    printf("somme (3,7,8,9) = %d\n", addition(3, 7, 8, 9));

    return 0;
}