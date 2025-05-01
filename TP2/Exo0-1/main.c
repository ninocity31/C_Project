#include <stdio.h>  // Inclusion de la bibliothèque standard d'entrée/sortie 
#include <stdlib.h> // Inclusion de la bibliothèque standard pour les fonctions comme malloc, free, etc. 

// Fonction pour échanger les valeurs de deux entiers
void echanger (int *a, int *b) {
    int temp = *a; // Stocke la valeur pointée par a dans une variable temporaire
    *a = *b;       // Assigne la valeur pointée par b à l'emplacement pointé par a
    *b = temp;     // Assigne la valeur temporaire à l'emplacement pointé par b
}


// Fonction pour afficher un tableau d'entiers
void afficher_tableau(int *tab, int taille) {
    for (int i = 0; i < taille; i++) { // Boucle pour parcourir le tableau
        printf(" ceci est la valeur n%d : %d\n", i , tab[i]);      // Affiche chaque élément du tableau
    }
    printf("\n"); // Affiche une nouvelle ligne après avoir affiché tous les éléments
}

void inverser_tableau(int *tab, int taille) {
    int *debut  = tab;              // Pointeur vers le début du tableau 
    int *fin = tab + taille - 1;    // Pointeur vers la fin du tableau
    while (debut<fin) {
        echanger(debut,fin);
        debut ++;
        fin --;
    }

}

int main()  {
    // Démonstration des pointeurs simples
    int a = 10;  
    printf("la valeur de a est : %d\n", a);     
    printf("valeur case mémoire de a est :%p\n", &a);  // Affiche l'adresse de a 

    int *pa = NULL;
    pa = &a;

    printf("à l'aide du pointeur est : %d\n", *pa);
    printf("Contenue de pa est : %d\n",*pa);
    printf("adresse de pa est : %p\n", (void*)&pa); // Affiche l'adresse de pa

    // Démonstration des tableaux et de l'arithmétique des pointeurs
    int **ppa  = NULL; // Déclaration d'un pointeur vers un pointeur
    ppa = &pa; // ppa pointe vers pa

    printf("à l'aide du pointeur vers un pointeur est : %d\n", **ppa); // Affiche la valeur pointée par pa


    // Test de la fonction d'échange
    int premier = 1; 
    int second = 2; 
    printf("avant l'échange : premier = %d, second = %d\n", premier, second); // Affiche les valeurs avant l'échange
    echanger(&premier, &second); // Appelle la fonction d'échange
    printf("après l'échange : premier = %d, second = %d\n", premier, second); // Affiche les valeurs après l'échange


    // Test de la fonction d'inversion de tableau
    int tableau[5] = {1, 2, 3, 4, 5}; // Déclaration d'un tableau d'entiers
    printf("Affichage du tableau avant inversion :\n");
    afficher_tableau(tableau, 5); // Affiche le tableau avant inversion
    inverser_tableau(tableau, 5); // Appelle la fonction d'inversion
    printf("Affichage du tableau après inversion :\n");
    afficher_tableau(tableau, 5); // Affiche le tableau après inversion

    system("pause"); // Pause le système pour permettre à l'utilisateur de voir les résultats avant de fermer la fenêtre
    return 0;


}

