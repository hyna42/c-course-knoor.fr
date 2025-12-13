#include <stdio.h>
#include "../libs/add/addition.h"
#include "../libs/fact/factoriel.h"

int main(void)
{
    puts("############ POINTEURS ############");
    int value = 10;
    int *pointeur = &value;  // contient l'adresse en mémoire de la variable

    
    printf("value == %d at %p\n", value, (void *) pointeur);

    *pointeur = 15;

    int x = 10;
    int *adX = &x;

    // change la valeur stockée à l'adresse mais pas l'adresse elle meme
    printf("value == %d at %p\n", value, (void *) pointeur);
    return 0;
}