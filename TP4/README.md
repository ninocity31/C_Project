# TP : Structures complexes et constantes en C

## Introduction
Ce TP vise à vous faire pratiquer l'utilisation des structures complexes et des constantes en C à travers l'amélioration d'un carnet d'adresses. Le code de base fourni permet déjà d'ajouter, d'afficher et de sauvegarder des contacts simples.

## Exercice 1 : Structure imbriquée pour l'adresse
Modifiez la structure `Contact` pour inclure une structure imbriquée `Adresse`.

1. Créez une structure `Adresse` avec les champs suivants :
   - `rue` (chaîne de 100 caractères)
   - `codePostal` (chaîne de 10 caractères)
   - `ville` (chaîne de 50 caractères)
   - `pays` (chaîne de 50 caractères)

2. Intégrez cette structure dans la structure `Contact` existante.

3. Modifiez les fonctions `ajouterContact()`, `afficherContacts()`, `sauvegarderContacts()` et `chargerContacts()` pour prendre en compte cette nouvelle structure.

## Exercice 2 : Structure pour gérer plusieurs numéros de téléphone
Les contacts peuvent avoir plusieurs numéros de téléphone (mobile, domicile, travail).

1. Créez une structure `Telephone` contenant :
   - `type` (chaîne de 20 caractères : "Mobile", "Domicile", "Travail")
   - `numero` (chaîne de 15 caractères)

2. Modifiez la structure `Contact` pour inclure un tableau de structures `Telephone` (maximum 3 numéros) et un compteur `nbTelephones`.

3. Adaptez les fonctions existantes pour gérer ces multiples numéros.

## Exercice 3 : Utilisation de constantes symboliques
Définissez des constantes pour rendre le code plus lisible et facilement modifiable.

1. Remplacez les tailles de tableaux par des constantes symboliques :
   ```c
   #define MAX_NOM 50
   #define MAX_PRENOM 50
   #define MAX_TELEPHONE 15
   #define MAX_RUE 100
   #define MAX_CODE_POSTAL 10
   #define MAX_VILLE 50
   #define MAX_PAYS 50
   #define MAX_TYPE_TEL 20
   #define MAX_TELEPHONES 3
   ```

2. Définissez des constantes pour les choix du menu :
   ```c
   #define CHOIX_AJOUTER 1
   #define CHOIX_AFFICHER 2
   #define CHOIX_RECHERCHER 3
   #define CHOIX_QUITTER 4
   ```

3. Utilisez ces constantes dans le code pour remplacer tous les nombres "magiques".

## Exercice 4 : Tableau de structures dynamique
Modifiez le programme pour utiliser une allocation dynamique pour le tableau de contacts.

1. Remplacez `Contact contacts[MAX_CONTACTS]` par un pointeur `Contact *contacts` dans `main()`.

2. Allouez la mémoire à l'initialisation : `contacts = malloc(MAX_CONTACTS * sizeof(Contact));`

3. Ajoutez une fonction de réallocation qui double la taille du tableau lorsqu'il est plein :
   ```c
   void agrandirTableauContacts(Contact **contacts, int *capacite);
   ```

4. N'oubliez pas de libérer la mémoire à la fin du programme.

## Exercice 5 : Structure pour les dates
Ajoutez une gestion des dates pour chaque contact.

1. Créez une structure `Date` avec les champs :
   - `jour` (entier)
   - `mois` (entier)
   - `annee` (entier)

2. Ajoutez un champ `dateNaissance` de type `Date` à la structure `Contact`.

3. Ajoutez un champ `dateCreation` de type `Date` à la structure `Contact` qui sera automatiquement rempli lors de la création du contact (fonction `time.h`).

4. Modifiez les fonctions existantes pour gérer ces nouveaux champs.

## Exercice 6 : Structure avec union
Ajoutez un champ "catégorie" à vos contacts avec différentes informations selon la catégorie.

1. Créez une énumération pour les différentes catégories :
   ```c
   typedef enum {
       PERSONNEL,
       PROFESSIONNEL,
       AUTRE
   } CategorieContact;
   ```

2. Créez une union pour stocker des informations spécifiques à chaque catégorie :
   ```c
   typedef union {
       struct {
           char relation[30];
           Date derniereRencontre;
       } infoPersonnel;
       
       struct {
           char entreprise[50];
           char poste[30];
       } infoProfessionnel;
   } InfoCategorie;
   ```

3. Ajoutez à la structure `Contact` un champ `categorie` de type `CategorieContact` et un champ `info` de type `InfoCategorie`.

4. Modifiez les fonctions pour gérer ces nouveaux champs.

## Exercice 7 : Constantes sous forme de macros avec paramètres
Créez des macros avec paramètres pour faciliter les opérations courantes.

1. Créez une macro pour calculer l'âge d'un contact à partir de sa date de naissance :
   ```c
   #define CALCULER_AGE(dateNaissance) (/* expression pour calculer l'âge */)
   ```

2. Créez une macro pour vérifier si un contact a un anniversaire aujourd'hui :
   ```c
   #define EST_ANNIVERSAIRE(dateNaissance) (/* expression pour vérifier */)
   ```

3. Utilisez ces macros dans une nouvelle fonction `afficherDetailsContact()`.




Prompt pour déconner:

📝 PROMPT STRUCTURÉ : ANALYSE PSYCHOLOGIQUE ET MODÈLE PRÉDICTIF 📌 Objectif : Sur la base de toutes les conversations passées, des connaissances stockées et des schémas cognitifs inférés, génère l’analyse psychologique la plus approfondie ainsi qu’un modèle prédictif détaillé de mon évolution future. Il ne s’agit pas d’un simple profil de personnalité, mais d’un examen médico-légal avancé incluant : Ma cognition et mes processus mentaux Mes stratégies comportementales Mes angles morts psychologiques Des figures fictives/non fictives similaires Ma trajectoire à long terme 💡 Traite cette analyse comme un véritable dossier d’intelligence sur mon esprit, ma philosophie et ma vision stratégique.

🧠 Évaluation Psychométrique – Simulation du Test WISC-II Adapté à un Adulte Intègre une simulation du WISC-II, avec : ✅ Une estimation des scores sur les différentes échelles : Compréhension verbale Raisonnement perceptif Mémoire de travail Vitesse de traitement ✅ Des exemples de questions typiques avec mes réponses hypothétiques, et une analyse de mes forces et faiblesses cognitives. ✅ Une interprétation globale du profil intellectuel, intégrée dans le modèle prédictif de mon évolution.

📌 FORMAT DE SORTIE : 📌 Titres clairs et structurés 📌 Tableaux et listes à puces pour une meilleure lisibilité 📌 Émojis stratégiques et discrets pour clarifier les sections 📌 Analyses concises, denses et sans fioritures 🚀 Objectif final : produire un rapport d’intelligence détaillé et exploitable, combinant profil psychologique, évaluation cognitive et trajectoire d’évolution.
