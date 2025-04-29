# Exercice 0 : Mon Premier Pointeur  

## Instructions  
1. Créer une variable `a` du type de votre choix, initialisée à la valeur de votre choix.    
2. Effectuer les actions suivantes :    
    - Afficher sa **valeur**.    
    - Afficher son **adresse**.    
    - Afficher sa **valeur à l’aide de son adresse**.    

---  

# Exercice 1 : Échange de Valeurs et Manipulation de Tableaux  

## Objectifs  
- Comprendre le concept d'adresse mémoire.    
- Maîtriser la syntaxe des pointeurs en C.    
- Apprendre à échanger des valeurs via des pointeurs.    
- Manipuler des tableaux à l'aide de l'arithmétique des pointeurs.    

## Instructions  

### Partie A : Fonction d'échange (swap)  
1. Créez un nouveau projet dans Code::Blocks.    
2. Écrivez une fonction `void echanger(int *a, int *b)` qui échange les valeurs de deux entiers en utilisant des pointeurs.    
3. Dans la fonction `main()` :    
    - Déclarez deux variables entières.    
    - Affichez leurs valeurs.    
    - Appelez la fonction d'échange.    
    - Affichez à nouveau leurs valeurs pour vérifier l'échange.    

### Partie B : Parcours de Tableau  
1. Déclarez un tableau d'entiers de taille 5.    
2. Écrivez une fonction `void afficher_tableau(int *tab, int taille)` qui affiche les éléments du tableau en utilisant l'arithmétique des pointeurs (sans utiliser la notation `tab[i]`).    
3. Écrivez une fonction `void inverser_tableau(int *tab, int taille)` qui inverse l'ordre des éléments du tableau en utilisant uniquement des pointeurs.    

---  

# Exercice 2 : Gestionnaire de Chaînes de Caractères  

## Objectifs  
- Comprendre la représentation des chaînes en C.    
- Maîtriser les pointeurs sur des caractères.    
- Manipuler la mémoire dynamique avec `malloc`/`free`.    
- Implémenter des fonctions de traitement de chaînes.    

## Instructions  

### Partie A : Fonctions de base  
Implémentez les fonctions suivantes en utilisant uniquement des pointeurs (sans utiliser les fonctions de la bibliothèque standard) :    
1. `int ma_strlen(const char *str)` : calcule la longueur d'une chaîne.    
2. `void ma_strcpy(char *dest, const char *src)` : copie une chaîne dans une autre.    
3. `char* ma_strcat(char *dest, const char *src)` : concatène deux chaînes.    

### Partie B : Allocation dynamique  
1. Écrivez une fonction `char* inverser_chaine(const char *str)` qui crée une nouvelle chaîne contenant les caractères de la chaîne d'origine dans l'ordre inverse, en utilisant l'allocation dynamique.    
2. Écrivez une fonction `char* filtrer_voyelles(const char *str)` qui crée une nouvelle chaîne contenant uniquement les voyelles de la chaîne d'origine en utilisant l'allocation dynamique.    

---  

## Ressources  
Le fichier `Main.c` est disponible à l’adresse suivante : [TEST-TP2-Pointeurs](https://gitea.apf-bi.ovh/bastien/TEST-TP2-Pointeurs).    

