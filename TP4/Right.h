
#ifndef FUNCTION_H  // This prevents multiple inclusions of the header file
#define FUNCTION_H
#include <stdio.h>

void Right() {
    char nom[50], prenom[50];
    FILE *fichier = NULL;
    char caractere;

    // Demande des informations � l'utilisateur (nom, pr�nom)
    printf("quelle est votre nom : ");
    scanf("%s", &nom);  // Corrected: no '&' needed
    printf("\nquelle est votre prenom : ");
    scanf("%s", &prenom);  // Corrected: no '&' needed
    printf("\n");

    // Ouverture du fichier en mode ajout ("a") pour �crire
    fichier = fopen("Info.txt", "a");

    // V�rification de l'ouverture
    if (fichier != NULL) {
        // �criture dans le fichier
        fprintf(fichier, "%s \n", nom);
        fprintf(fichier, "%s \n", prenom);

        // Message de confirmation
        printf("Informations enregistr�es avec succ�s!\n");

        // Fermeture du fichier apr�s �criture
        fclose(fichier);

        // R�ouverture du fichier en mode lecture ("r")
        fichier = fopen("Info.txt", "r");

        // V�rification si l'ouverture pour lecture a r�ussi
        if (fichier != NULL) {
            printf("Contenu du fichier :\n");

            // Lecture et affichage caract�re par caract�re
            while ((caractere = fgetc(fichier)) != EOF) {
                printf("%c", caractere);
            }

            // Fermeture du fichier apr�s lecture
            fclose(fichier);
        } else {
            printf("Impossible de lire le fichier.\n");
        }

    } else {
        printf("Impossible d'ouvrir le fichier.\n");
    }

    return 0;
}
#endif
