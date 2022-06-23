#include <stdio.h>
#include <stdlib.h>
#include "Fonction_scalaire.c"
int main()
{
    printf("____________________________________\n");
    table_t Tab;
    Tab=getTable(sinusoideAmortie,-5,5,100);
    printf("____________________________________\n");
    afficherTable(&Tab);
    system("pause");
}