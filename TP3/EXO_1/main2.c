#include <stdio.h>
#include <stdlib.h>

void ajouterContact();
void afficherContacts();
 
int main() {
    
    int choix= 0;

    do
    {
        printf("\n-- Gestion des contacts --\n");
        printf("1. Ajouter un contact\n");
        printf("2. Afficher les contacts\n");
        printf("3. Quitter\n");
        printf("Entrez votre choix: ");
        scanf("%d", &choix);
        getchar(); // Pour consommer le caractère de nouvelle ligne restant dans le tampon

        switch (choix) {
            case 1:
                ajouterContact();
                break;
            case 2:
                afficherContacts();
                break;
            case 3:
                printf("Au revoir!\n");
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }

    } while (choix != 3);



    return 0;
}

void ajouterContact() {
    char nom[50];
    char prenom[50];
    char email[100];
    char telephone[15];

    printf("\n-- Ajouter un contact --\n");
    printf("Nom: ");
   scanf("%s;", nom);
    printf("\nPrénom: ");
   scanf("%s;", prenom);
    printf("\nEmail: ");
   scanf("%s;", email);
    printf("\nTéléphone: ");
   scanf("%s;", telephone);
 
    
    // Enregistrer le contact dans un fichier (ou une base de données)
    FILE *fichier = fopen("contacts.txt", "a");
    if (fichier != NULL) {
        fprintf(fichier, "%s;%s;%s;%s\n", nom, prenom, email, telephone);
        fclose(fichier);
        printf("Contact ajouté avec succès!\n");
    } else {
        printf("Erreur lors de l'ouverture du fichier.\n");
    }
}


void afficherContacts() {
    char ligne[256];
    FILE *fichier = fopen("contacts.txt", "r");

    if (fichier == NULL) {
        printf("Aucun contact trouvé.\n");
        return;
    }

    printf("\n-- Liste des contacts --\n");
    while (fgets(ligne, sizeof(ligne), fichier)) {
        printf("%s", ligne);
    }

    fclose(fichier);
}
