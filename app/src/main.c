#include <stdio.h>
#include <stdlib.h>

/**
 *  -----
 *  STACK :
 *  -> allocation automatique
 *  -> durée de vie = portée, (scope)
 *  -> très rapide
 *  -> taille limitée
 *
 *  -----
 *  HEAP :
 *  -> allocation manuelle
 *  -> durée de vie contrôlée par le programmeur
 *  -> plux fléxible
 *  -> plus risquée
 *
 *  fonctions (HEAP)
 * - malloc() : alloue un bloc mémoire non initialisé
 * - calloc () : alloue ET initialise à 0
 * - realloc(): redimentionne un bloc existant
 * - free() : libère la mémoire allouée, à utiliser après chaque [malloc, calloc, realloc]
 *
 *
 */

void process(size_t n)
{
    int *arr = malloc(n * sizeof(int));

    if (!arr)
    {
        printf("malloc failed\n");
        return;
    }

    printf("allocated %zu ints\n", n);

    for (size_t i = 0; i < n; i++)
        arr[i] = i * 2;

    printf("arr[%zu] = %d\n", n - 1, arr[n - 1]);

    free(arr);
    arr = NULL;
    printf("memory freed\n");
}

int main(void)
{
    puts("############ GESTION DYNAMIQUE DE LA MEMOIRE ############");

    // heap
    int *p = (int *)malloc(5 * sizeof(int));
    printf("heap :: %p\n", (void *)p);

    size_t n = 5;
    int *arr = malloc(n * sizeof(int));
    if (!arr)
        return -1;
    for (size_t i = 0; i < n; i++)
    {
        /* code */
        arr[i] = i * 2;
    }
    printf("BEFOR free() : %p\n", (void *)arr);

    // free(arr);
    arr = NULL;
    printf("AFTER free() : %p\n", (void *)arr);

    printf("sizeof(int) = %zu octets \n", sizeof(int));

    process(4);

    // addresse invalide du stème
    
    printf("%p\n", (void *)0);
    printf("%p\n", (void *)NULL);

    return EXIT_SUCCESS;
}