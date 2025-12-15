#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int temVar = *a;
    *a = *b;
    *b = temVar;

    printf("adresse a = %p, adress b = %p\n", (void *)a, (void *)b);
    printf("valeur a = %d, valeur b = %d\n", *a,*b);
}

int main(void)
{
    puts("############ MANIPULATION DE LISTES CHAINEES ############");

    int a = 10;
    int b = 20;
    swap(&a, &b);

    return EXIT_SUCCESS;
}