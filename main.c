#include <stdio.h>
#include <stddef.h>
#include <stdbool.h>
#define ARRAY_SIZE 5

struct Rationnal
{
    int numerator;
    int denominator;
};

enum LifeCycleState
{
    INITIALIZED,
    STARTED,
    STOPED,
    DESTROYED
};

int main(void)
{

    // 1.a Types numériques entiers : char - short - int - long
    char numb2 = 'A';
    short numb3 = 100;
    int numb4 = 1000;
    long numb5 = 1000000000L;
    size_t numb1 = 10;
    printf("sizeof (char) == %lu octet \n", sizeof(numb2));
    printf("sizeof (short) == %lu octets \n", sizeof(numb3));
    printf("sizeof (int) == %lu octets \n", sizeof(numb4));
    printf("sizeof (long) == %lu octets \n", sizeof(numb5));

    printf("sizeof (size_t) == %lu octets \n", sizeof(numb1));
    puts("******************************");

    // 1.b Types numériques décimaux : float - double
    float numb6 = 3.14f;
    double numb7 = 3.14159254;
    printf("sizeof (float) == %lu octets \n", sizeof(numb6));
    printf("sizeof (double) == %lu octets \n", sizeof(numb7));
    puts("******************************");

    // Attention : le nombre d'octets utilisé par une donnée d'un type particulier est dépendant de la plate-forme d'exécution.
    printf("Un entier 42 exprimé en décimal : %d \n", 42);
    printf("Un entier 42 exprimé en octal : %d \n", 042);
    printf("Un entier 42 exprimé en héxadécimal : %d \n", 0x42);
    puts("******************************");

    // 1.c Booléens en C
    bool state = false;
    if (state)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    // 2. caractères : différencier le type numérique sur un octet et les caractères.
    puts("******************************");
    char numericCode1 = 65;
    char numericCode2 = 'a';
    printf("numericCode1 as byte : %d octets \n", numericCode1);
    printf("numericCode1 as char : %c \n", numericCode1);

    printf("numericCode2 as byte : %d octets \n", numericCode2);
    printf("numericCode2 as char : %c \n", numericCode2);

    puts("******************************");

    // 3. arrays
    int array[ARRAY_SIZE] = {1, 2, 4, 8, 16};
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("arrar[%d] == %d\n", i, array[i]);
    }
    /**
     * REMARQUES :
     * i - en C le tableau ne connait pas sa taille, on peut soit la calculer ou la définir (avec une macro)
     * ii - le C ne vériife pas les indices d'un tableau
     * iii - les cases d'un tableau ne sont pas initialisés par défaut
     */
    int arraySize = sizeof(array) / sizeof(array[0]);
    printf("Taille du tableau calculé avec sizeof() = %d éléments\n", arraySize);
    puts("******************************");

    // 4. strings
    const char *firstName = "Daddy";
    char lastName[] = "Bibson";
    char label[8] = {'R', 'A', 'P', 'A', 'D', 'I', 'O', '\0'};
    // const char *lastName = "Bibson";
    printf("I'm %s %s and my label name is %s\n", firstName, lastName, label);
    puts("******************************");
    // 5. pointeurs
    int value = 41;
    int *addr = &value; // addr est un pointeur sur un entier (une adresse vers un entier)
    *addr += 1;
    printf("value modifié via pointeur %d\n", value);

    puts("******************************");

    // 5. structure
    struct Rationnal rt;
    rt.numerator = 1;
    rt.denominator = 3;
    printf("Our rationnal : [%d/%d]\n, ", rt.numerator, rt.denominator);

    puts("******************************");
    // 6 énumération
    enum LifeCycleState currentState = INITIALIZED;
    printf("Current state (a) = %d\n", currentState);

    currentState = STOPED;
    printf("Current state (b) =  %d\n", currentState);

    currentState = STARTED;
    printf("Current state (c) =  %d\n", currentState);

    currentState = DESTROYED;
    printf("Current state (d) =  %d\n", currentState);

    puts("******************************");
    return 0;
}
