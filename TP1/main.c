#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
///Quest 1
/*
double x , racine;

printf("\n Entrer le rÃ©el x : ");
//Demander a l'utilisateur le nombre
scanf("%lf",&x);
racine = sqrt(x);
printf("\n La racine carrÃ©e de %lf est : %lf" , x , racine);

*/


///Quest 2
/*
int x,y;

printf("Donner moi deux entiers : ");
//demander les entiers Ã‰crire un programme qui demande
â–ª les coordonnÃ©es (ð‘¥,ð‘¦) de 2 points (ð´ ð‘’ð‘¡ ðµ)
â–ª et d'un point (ð‘ƒ).
scanf("%d %d"   , &x ,&y);

double quotient = (double)x/y;
printf("\nle quotient rÃ©el = %lf" , quotient);
*/

///Quest 3
///on definie A et B
/*double xa, ya, xb, yb, xc, yc, xd, yd, x, y;
printf ("Entrez le point A (xa et ya) :"); scanf("%lf %lf", &xa, &ya);
printf ("Entrez le point B (xb et yb) if (xa < xb)
{
xc = xa; xd = xb;
}
if (xa < xb)
{
xc = xa; xd = xb;
}
else
{
xc = xb; xd = xa;
}else
{
xc = xb; xd = xa;
}:"); scanf("%lf %lf", &xb, &yb);
printf ("Entrez le point P (x et y) :"); scanf("%lf %lf", &x, &y);
if (xa < xb)
{
xc = xa; xd = xb;
}
else
{
xc = xb; xd = xa;
}
if (ya < yb)
{
yc = ya; yd = yb;
}
else
{
yc = yb; yd = ya;
}
if ((x < xc) || (x > xd) || (y < yc) || (y > yd))
printf("Raté !\n");if (xa < xb)
{
xc = xa; xd = xb;
}
else
{
xc = xb; xd = xa;
}
else if ((x == xc) || (x == xd) || (y == yc) || (y == yd))
printf("Même pas mal !\n");
else
printf("Touché!\n");
return 0;
}
*/
/// second try ///
/*double xa ,xb ,ya ,yb ,x ,y ;
printf ("Entrez le point A (xa et ya) :"); scanf("%lf %lf", &xa, &ya);
printf ("Entrez le point B (xb et yb) :"); scanf("%lf %lf", &xb, &yb);
printf ("Entrez le point P (x et y) :"); scanf("%lf %lf", &x, &y);

if (fabs(xa-xb)==(fabs(x-xa)+fabs(x-xb)) && (fabs(ya-yb)==(abs(y-ya)+fabs(y-yb))))
{
 if ((fabs(x-xa) == 0) || (fabs(x-xb) == 0) || (fabs(y-ya) == 0) || (fabs(y-yb)) == 0)
 {
     printf("Même pas mal !\n");
 }
 else
 {
    printf("Touché!\n");
 }

}
elseif (xa < xb)
{
xc = xa; xd = xb;
}
else
{
xc = xb; xd = xa;
}
    {
        printf("Raté !\n");if (xa < xb)
{
xc = xa; xd = xb;
}
else
{
xc = xb; xd = xa;
}
    }
return 0;

}
*/

}
