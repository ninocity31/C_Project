#include <stdio.h>
#include <stdlib.h>


int ma_sterlen(const char *str) {
        int length = 0;
        while (*str != '\0') {  // Compte les caractères jusqu'à la fin de la chaîne
            length++;
            str++;
        }
        return length;  // Retourne la longueur de la chaîne
    }


void ma_strcpy(char *dest, const char *src) {
        while (*src != '\0') {  // Copie la chaîne source dans la destination
            *dest = *src;
            src++;
            dest++;
        }
        *dest = '\0';  // Ajoute le caractère de fin de chaîne
    }  

char *inverser_chaine(char *str) {
    char *debut = (char*)str; // Pointeur vers le début de la chaîne
    char *fin = (char*)str + ma_sterlen(str) - 1; // Pointeur vers la fin de la chaîne

    while (debut < fin) { // Inverse les caractères
        char temp = *debut; // Stocke le caractère du début
        *debut = *fin; // Remplace le caractère du début par celui de la fin
        *fin = temp; // Remplace le caractère de la fin par celui du début
        debut++; // Avance le pointeur du début
        fin--; // Recule le pointeur de la fin
    }
    
    return (char*)str;  // Retourne la chaîne modifiée 
    
}

    
void ma_strcat(char *dest, const char *src) {
    char *p = dest + ma_sterlen(dest);  // Met p à la fin de la chaîne destination
    ma_strcpy(p, src);  // Copie la chaîne source à la fin de la destination
    }   


char *filtrer_voyelles(const char *str) {
        char *p = (char*) malloc(sizeof(char) * (ma_sterlen(str) + 1)); // Allocation d'une nouvelle chaîne
        // ERREUR: xl n'est pas déclaré, devrait être char *xl = p;
        char *xl = p; // Correction ajoutée: garde un pointeur vers le début de la mémoire allouée
    
        if (p == NULL) {
            printf("c'est la merde"); // Message d'erreur si l'allocation échoue
            return NULL;
        }
    
        while (*str != '\0') {
            // Vérifie si le caractère actuel est une voyelle
            if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' || *str == 'y') {
                *p = *str;       // Copie la voyelle
                p++;             // Avance le pointeur de destination
                printf("%c", *p); // Affiche uniquement la voyelle actuelle
            }
            str++; // Avance le pointeur source
        }
    
        *p = '\0'; // Ajoute le caractère de fin de chaîne
        printf("%s", xl); // Affiche la chaîne complète depuis le début
    
        // ERREUR: V n'est pas déclaré, devrait retourner xl
        return xl; // Correction ajoutée: retourne le début de la chaîne allouée
    }




int main() {
    
    // Partie A: Fonctions de base sur les chaînes
    printf("Partie A: Fonctions de base sur les chaînes\n");
    char chaine1[50] = "Bonjour";
    char chaine2[50] = " tout le monde";
    char chaine3[100];

    printf("Chaine1: \"%s\"\n", chaine1);
    printf("Chaine2: \"%s\"\n", chaine2);
    printf("Longueur de Chaine1: %d caractères\n", ma_sterlen(chaine1));

    ma_strcpy(chaine3, chaine1);  // Copie chaine1 dans chaine3
    printf("Chaine3 après copie de Chaine1: \"%s\"\n", chaine3);
    ma_strcat(chaine3, chaine2);  // Concatène chaine2 à la fin de chaine3
    printf("Chaine3 après concaténation avec Chaine2: \"%s\"\n", chaine3);
    printf("Longueur de Chaine3: %d caractères\n", ma_sterlen(chaine3));
    
    
    // Partie B: Allocation dynamique
    printf("Partie B: Allocation dynamique\n");
    char *inverse = inverser_chaine(chaine3);
    // ATTENTION: inverse et chaine3 pointent vers la même zone mémoire 
    printf("Chaîne inversée: \"%s\"\n", inverse);
    printf("Longueur de chaine3: %d caractères\n", ma_sterlen(chaine3));

    char *voyelles = filtrer_voyelles(chaine3);
    printf("Voyelles uniquement: \"%s\"\n", voyelles);
    

    // Libération de la mémoire
    free(voyelles);
    
    system("pause");
        return 0;
}