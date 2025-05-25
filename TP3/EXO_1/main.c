#include <stdio.h>
 
int main() {
    
    // Déclaration des variables
    char nom[50], prenom[50];
    FILE *fichier = NULL;
    char line[256];
    char ch;
    
    // Demande des informations à l'utilisateur (nom, prénom)
    printf("Entrez votre nom: ");
    scanf("%49s", nom);
    printf("Entrez votre prénom: ");
    scanf("%49s", prenom);

    // Ouverture du fichier
    fichier = fopen("identite.txt", "a+");

    
    // Vérification de l'ouverture
    if (fichier != NULL) {

        // écriture dans le fichier
        fprintf(fichier, "Nom: %-15s, Prénom: %-15s\n", nom, prenom);
        printf("Informations enregistrées avec succès!\n");
        
        // lecture du fichier
        printf("----------------------------------------\n");
        rewind(fichier);
        printf("Contenu du fichier identite.txt:\n");
        while (fgets(line, sizeof(line), fichier)) {
            printf("%s", line);
        }

        // Fermeture du fichier
        fclose(fichier);

    } else {
        printf("Erreur lors de l'ouverture du fichier.\n");
    }
    
    return 0;
}
