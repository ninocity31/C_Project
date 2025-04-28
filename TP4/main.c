#include <stdio.h>
#include <stdlib.h>
#include "P:\TPC\TP_4\Right.h"


void ajouterContact()
{
    FILE *fichier = NULL;
    fichier = fopen("Contacts.txt", "a");
    if (fichier != NULL)
    {
        char nom[50] ,prenom[50], num[10];
        printf("quelle est le nom de la personne ? : ");
        scanf("%s\n",&nom);
        printf("quelle est le Prenom de la personne ? : ");
        scanf("%s\n",&prenom);
        printf("quelles est le numero de la personne ? : ");
        scanf("%s\n",&num);
        Right();
    }
    else()
    {
        printf("Impossible de lire le fichier.\n");
    }



}

void afficherContact()
{






}




int main()
{
    printf("Hello world!\n");
    ajouterContact();
    return 0;
}
