#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ajouterContact();
void afficherContacts();
void sauvgarderContacts();
void chargerContacts();
void start_table();
int is_file_started(const char *filename);

const char *segment15 = "----------------";
const char *segment20 = "---------------------";
const char *segment40 = "-----------------------------------------";

int main() {
    int choix = 0;
    int start = 0;
    if (!is_file_started("contacts.txt")) {
        start_table();
    }

    do
    {
        printf("\nMenu:\n");
        printf("1. Ajouter un contact\n");
        printf("2. Afficher les contacts\n");
        printf("3. Sauvegarder les contacts\n");
        printf("4. Charger les contacts\n");
        printf("5. Quitter\n");
        printf("Choisissez une option: ");
        scanf("%d", &choix);
        printf("\n");

        switch (choix) {
            case 1:
                ajouterContact();
                break;
            case 2:
                afficherContacts();
                break;
            case 3:
                sauvgarderContacts();
                break;
            case 4:
                chargerContacts();
                break;
            case 5:
                printf("Au revoir!\n");
                break;
            default:
                printf("Choix invalide. Veuillez réessayer.\n");
        }
    } while (choix != 5);

    return 0;
}


int is_file_started(const char *filename) {
    FILE *f = fopen(filename, "r");
    if (f == NULL) {
        // File does not exist
        return 0;
    }
    char buffer[128];
    if (fgets(buffer, sizeof(buffer), f) != NULL) {
        // Check if the first line matches the table header
        if (strstr(buffer, "+---------------------+---------------------+-----------------------------------------+----------------+") != NULL) {
            fclose(f);
            return 1;
        }
    }
    fclose(f);
    return 0;
}

void start_table() {
    FILE *f = fopen("contacts.txt", "a");
    if (f != NULL) {
        fprintf(f, "+%-20s+%-20s+%-40s+%-15s+\n", segment20, segment20, segment40, segment15);
        fprintf(f, "| %-20s| %-20s| %-40s| %-15s|\n", "nom", "prenom", "email", "telephone");
        fprintf(f, "+%-20s+%-20s+%-40s+%-15s+\n", segment20, segment20, segment40, segment15);
        fclose(f);
    } else {
        printf("Erreur lors de la création du fichier.\n");
    }
}


void ajouterContact() {
    char nom[50], prenom[50], email[100], telephone[15];
    // Implémentation de l'ajout d'un contact
    printf("Entrez le nom: ");
    scanf("%s", nom);
    printf("Entrez le prénom: ");
    scanf("%s", prenom);
    printf("Entrez l'email: ");
    scanf("%s", email);
    printf("Entrez le téléphone: ");
    scanf("%s", telephone);

    FILE *f = fopen("contacts.txt","a");
    if (f != NULL) {
        fprintf(f, "| %-20s| %-20s| %-40s| %-15s|\n", nom, prenom, email, telephone);
        fprintf(f, "+%-20s+%-20s+%-40s+%-15s+\n", segment20, segment20, segment40, segment15);
        fclose(f);
    } else {
        printf("Erreur lors de l'ouverture du fichier.\n");
    }
}

void afficherContacts() {
    char ligne[256];
    FILE *f = fopen ("contacts.txt", "r");
    if (f != NULL) {
        while (fgets(ligne, sizeof(ligne), f)) {
            printf("%s", ligne);
        }
        fclose(f);
    } else {
        printf("Erreur lors de l'ouverture du fichier.\n");
    }
}

// Fonctions vides pour éviter les erreurs de liaison
void sauvgarderContacts() {
    printf("\nFonction de sauvegarde non implémentée.\n");
}

void chargerContacts() {
    printf("\nFonction de chargement non implémentée.\n");
} 
