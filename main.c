#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>

unsigned int fac(unsigned int value)
{
    unsigned int result = 1;
    while (value > 1)
    {
        result *= value;
        value--;
    }

    return result;
}

int add(int counter, ...)
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

int main(int argc, char *argv[])
{

    printf("factoriel de 5 = %d \n", fac(5));
    printf("factoriel de 4 = %d \n", fac(4));

    for (int i = 1; i < argc; i++)
    {
        printf("Argument at position %2d == %s\n", i, argv[i]);
    }

    puts("********* funciton with arg variables **********");

    printf("somme : %d\n", add(3, 7, 1, 2));

    return 0;
}