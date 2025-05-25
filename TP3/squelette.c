#include <stdio.h>
 
int main() {
    char nom[50], prenom[50];
    FILE *fichier = NULL;
    
    // Demande des informations à l'utilisateur (nom, prénom)
    // À compléter
    
    // Ouverture du fichier
    fichier = // À compléter
    
    // Vérification de l'ouverture
    if (fichier != NULL) {
        // Écriture dans le fichier
        // À compléter
        
        // Fermeture du fichier
        // À compléter
        
        printf("Informations enregistrées avec succès!\n");
    } else {
        printf("Erreur lors de l'ouverture du fichier.\n");
    }
    
    return 0;
}
