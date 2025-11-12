#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>
#include "headers/factoriel.h"

// unsigned int fac(unsigned int value)
// {
//     unsigned int result = 1;
//     while (value > 1)
//     {
//         result *= value;
//         value--;
//     }

//     return result;
// }

int main(void)
{

    
    // for (int i = 1; i < argc; i++)
    // {
        //     printf("Argument at position %2d == %s\n", i, argv[i]);
    // }
    
    puts("**** calcul factoriel ****");
    printf("factoriel de 5 = %d \n", factoriel(5));
    printf("factoriel de 4 = %d \n", factoriel(4));

    return 0;
}