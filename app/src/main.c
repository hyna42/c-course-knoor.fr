#include <stdio.h>
#include "../libs/add/addition.h"
#include "../libs/fact/factoriel.h"

#define SIZE 3

int swap(int param1, int param2)
{
    // foncition pour permuter les paramètres (1 et 2)
    printf("Avant :: first==%d, second==%d\n", param1, param2);
    int temp = param1;
    param1 = param2;
    param2 = temp;
    printf("Après :: first==%d, second==%d\n", param1, param2);

    return 1;
}

int swap2(int *param1, int *param2)
{
    // foncition pour permuter les paramètres (1 et 2)
    printf("Avant :: first==%d, second==%d\n", *param1, *param2);
    int temp = *param1;
    *param1 = *param2;
    *param2 = temp;
    printf("Après :: first==%d, second==%d\n", *param1, *param2);

    return 1;
}

// void canreadNotWrite(const int *p)
// {
//     printf("READ VALUE :: %d\n", *p); // Can read
//     // *p = 12;                          // Cannot write. Content of value cannot be writed.
//     p = 12;                          // Cannot write. Content of value cannot be writed.
// }

/*
 * Fonction d'affichage d'un tableau (syntaxe pointeur)
 */
void displayIntArray_PTR(int *array, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", *(array + i));
    }
    printf("\n");
}

/*
 * Fonction d'affichage d'un tableau (syntaxe tableau)
 */
void displayIntArray_TB(int *array, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

/*
 * Fonction de réinitialisation d'un tableau (syntaxe pointeur)
 */
void clearIntArray_PTR(int *array, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        *(array + i) = 0;
    }
}

/*
 * Fonction de réinitialisation d'un tableau (syntaxe tableau)
 */
void clearIntArray_TB(int *array, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        array[i] = 0;
    }
}

/**
 * Fonction de calcul de la taille d'une chaîne de caractère :
 * on boucle jusqu'à atteindre le caractère '\0' (la fin de chaîne)
 */


size_t myStrlen(const char *myString){
    size_t size = 0;
    
  while (*myString != '\0')
  {
      printf("Char : %d\n,", *myString);
      myString++;
      size++;
  }
  
    
    return size;
}


/**
 * Fonction de mise en majuscule d'une chaine de caractère ASCII
 */

int main(void)
{
    puts("############ POINTEURS ############");
    int value = 10;
    int *pointeur = &value; // contient l'adresse en mémoire de la variable

    printf("value == %d at %p\n", value, (void *)pointeur);

    *pointeur = 15;

    // change la valeur stockée à l'adresse mais pas l'adresse elle meme
    printf("value == %d at %p\n", value, (void *)pointeur);

    // role des  pointeurs : utilissateur passage a une fonction
    int a = 10;
    int b = 20;
    puts("----permutation KO without pointer/adresses----");
    swap(a, b); // ici on passe une copie des valeurs a la fonction swap(), mais pas les valeurs d'origine
    printf("KO swap :: a==%d, b==%d\n", a, b);
    // NB : si on veut que la permutation fonctionne on doit passer non pas les COPIES mais les POINTEURS vers les variables
    puts("----permutation KO using pointer/adress ----");
    swap2(&a, &b);
    printf("OK swap :: a==%d, b==%d\n", a, b);

    // secutité : canot write : const + pointer
    puts("----CAN READ / NOT WRITE ---");
    // int p = 10;
    // canreadNotWrite(&p);

    puts("----II. TABLEAU ET POINTEUR  ---");
    // un tableau est un pointeur vers son premier élément : d'ou l'intére de fournir la taile du tableau
    int tab[] = {10, 20, 30};
    for (int i = 0; i < SIZE; i++)
    {
        printf("tab %d == %d\n", i, *(tab + i)); // parcourir un tableau facon pointeur : *(tab + i) <=> tab[i]
    }
    printf("VERIF (1) :: %p == %p\n", (void *)tab, (void *)&tab[0]); // un tableau est un pointeur a son premier élément

    int array[] = {1, 2, 3, 4, 5};
    size_t arraySize = 5;

    puts("----DISPLAY ARRAY with pointer or array  ---");
    // array -> pointeur
    displayIntArray_PTR(array, arraySize);
    // array -> array
    displayIntArray_TB(array, arraySize);
    puts("----CLEAR ARRAY with pointer or array  ---");
    // reinitialise tablea
    clearIntArray_TB(array, arraySize);

    displayIntArray_PTR(array, arraySize);

    puts("----III. CHAINES DE CARACTERES ET POINTEURS  ---");
    int size = myStrlen("Daddy");
    printf("size of my string === %d\n", size);


    return 0;
}