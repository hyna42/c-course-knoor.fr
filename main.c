#include <stdio.h>
#include "../libs/add/addition.h"
#include "../libs/fact/factoriel.h"


int main(void)
{

    puts("**** MAIN ****");
    printf("factoriel de 5 = %d \n", factoriel(5));
    printf("factoriel de 4 = %d \n", factoriel(4));
    
    
    puts("**** somme dynamique****");
    printf("somme (3,7,8,9) = %d\n", addition(3, 7, 8, 9));

    return 0;
}