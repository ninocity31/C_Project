#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

/// Quest 1

///Version 1
/*    int x1 ,x2 ,x3 ,x4 ,x5;
    //Demander et tester les 5 nombres
    printf("Entrer les 5 nombres entiers : ");
    scanf("%d %d %d %d %d",&x1 ,&x2 ,&x3 ,&x4 ,&x5);

    if (x1%2 == 0) printf("%d est pair \n",x1);
    else printf("%d est impair \n");
    if (x2%2 == 0) printf("%d est pair \n",x2);
    else printf("%d est impair \n");
    if (x3%2 == 0) printf("%d est pair \n",x3);
    else printf("%d est impair \n");
    if (x4%2 == 0) printf("%d est pair \n",x4);
    else printf("%d est impair \n");
    if (x5%2 == 0) printf("%d est pair \n",x5);
    else printf("%d est impair \n");
return 0;
*/
///Version 2
    int nombre
    int compteur=0
    while (i=0; i<5;i++)
    {
        printf("Entrer 5 nombre : ");
        scanf("%d",&nombre);
        if (nombre%2 == 0) printf("%d est pair.", nombre);
        else printf("%d est impair.", nombre);
    }


///Version 3
/*    int nombre;


    // Demander et tester les 5 nombres
    printf("Entrez 5 nombres :\n");
    for (int i = 1; i <= 5; i++) {
        printf("Nombre %d: ", i);
        scanf("%d", &nombre);

        // V‚rifier si le nombre est impair
        if (nombre % 2 != 0) {
            printf("%d est impair.\n", nombre);
        }
        else
        {
            printf("%d est pair.\n",nombre)
        }
    }

    return 0;
*/

}
