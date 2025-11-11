#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

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

int main(int argc, char *argv[])
{

    printf("factoriel de 5 = %d \n", fac(5));
    printf("factoriel de 4 = %d \n", fac(4));

    for (int i = 1; i < argc; i++)
    {
        printf("Argument at position %2d == %s\n", i, argv[i]);
    }
    return 0;
}