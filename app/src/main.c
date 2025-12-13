#include <stdio.h>
#include "../libs/add/addition.h"
#include "../libs/fact/factoriel.h"

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

void canreadNotWrite(const int *p){
    printf("READ VALUE :: %d\n", *p);// Can read
    *p = 12;// Cannot write. Content of value cannot be writed.

}


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
    swap(a, b);//ici on passe une copie des valeurs a la fonction swap(), mais pas les valeurs d'origine
    printf("KO swap :: a==%d, b==%d\n", a, b);
    // NB : si on veut que la permutation fonctionne on doit passer non pas les COPIES mais les POINTEURS vers les variables
    puts("----permutation KO using pointer/adress ----");
    swap2(&a, &b);
    printf("OK swap :: a==%d, b==%d\n", a, b);
    
    //secutité : canot write : const + pointer 
    puts("----CAN READ / NOT WRITE ---");
    int p = 10;
    canreadNotWrite(&p);

    return 0;
}