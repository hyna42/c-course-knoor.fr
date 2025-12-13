#include <stdio.h>
// #include <stddef.h>
// #include <stdlib.h>
#include <stdarg.h>
#include "../libs/add/addition.h"
#include "../libs/fact/factoriel.h"

int main(int argc, char *argv[])
{

    puts("############ FONCTIONS ############");

    puts("**** calcul factoriel ****");
    printf("factoriel de 5 = %d \n", factoriel(5));
    printf("factoriel de 4 = %d \n", factoriel(4));

    // 1. fonction avec arguments
    puts("**** 1. Fontions avec arguments **** ****");
    for (int i = 1; i < argc; i++)
    {
        // cettte fonction affiche les différents arguments passés à la fonction
        printf("Argument à l'index %2d == %s\n", i, argv[i]);
    }

    // fonction avec arguments
    puts("**** 2. Fontions avec arguments variable **** ****");
    puts("**** somme dynamique****");
    printf("somme (3,7,8,9) = %d\n", addition(3, 7, 8, 9));

    return 0;
}