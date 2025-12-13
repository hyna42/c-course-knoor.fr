// fichier d'implémentations
#include <stdarg.h>
#include "factoriel.h"

// unsigned int add(unsigned int counter, ...)
// {
//     int sum = 0;
//     va_list paramInfos;

//     va_start(paramInfos, counter);

//     while (counter > 0)
//     {
//         sum += va_arg(paramInfos, int);
//         counter--;
//     }
//     va_end(paramInfos);
//     return sum;
// }

unsigned int factoriel(unsigned int value)
{
    unsigned int result = 1;

    while (value > 1)
    {
        result *= value;
        value--;
    }

    return result;
}