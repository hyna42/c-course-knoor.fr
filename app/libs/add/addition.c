// implementation de la fonction addition avce des param dynamiques
#include <stdarg.h>
#include "addition.h"

unsigned int addition(unsigned int counter, ...)
{
    int sum = 0;
    va_list paramInfos;

    va_start(paramInfos, counter);

    while (counter > 0)
    {

        sum += va_arg(paramInfos, int);
        counter--;
    }

    va_end(paramInfos);

    return sum;
}
