
#ifndef FUNCTION_H  // This prevents multiple inclusions of the header file
#define FUNCTION_H
#include <stdio.h>

void Right() {
    char nom[50], prenom[50];
    FILE *fichier = NULL;
    char caractere;

    // Demande des informations à l'utilisateur (nom, prénom)
    printf("quelle est votre nom : ");
    scanf("%s", &nom);  // Corrected: no '&' needed
    printf("\nquelle est votre prenom : ");
    scanf("%s", &prenom);  // Corrected: no '&' needed
    printf("\n");

    // Ouverture du fichier en mode ajout ("a") pour écrire
    fichier = fopen("Info.txt", "a");

    // Vérification de l'ouverture
    if (fichier != NULL) {
        // Écriture dans le fichier
        fprintf(fichier, "%s \n", nom);
        fprintf(fichier, "%s \n", prenom);

        // Message de confirmation
        printf("Informations enregistrées avec succès!\n");

        // Fermeture du fichier après écriture
        fclose(fichier);

        // Réouverture du fichier en mode lecture ("r")
        fichier = fopen("Info.txt", "r");

        // Vérification si l'ouverture pour lecture a réussi
        if (fichier != NULL) {
            printf("Contenu du fichier :\n");

            // Lecture et affichage caractère par caractère
            while ((caractere = fgetc(fichier)) != EOF) {
                printf("%c", caractere);
            }

            // Fermeture du fichier après lecture
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
