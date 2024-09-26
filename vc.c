/*
#include <stdio.h>
#include <stdlib.h>

int main()
{   char nom, prenom , email;
    int age ;
    printf("Mon nom est : \n");
    scanf("%c",&nom);
    printf("Mon prenom est : \n");
    scanf("%c",&prenom);
    printf("Mon email est :\n");
    scanf("%c",&email);
    printf("Mon age est :");

    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float k,m;
    printf("Entrer  la vitesse en kiloemtres par heure (km/h):\n");
    scanf("%f",&k);
    m = k * 0.27778;
    printf("La vitesse en metres par seconde (m/s): %.2f",m);

    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{  float a,b;
   float sum,ad,div,mul;

      printf("Entrer un nombre reel a:");
      scanf("%f",&a);

      printf("Entrer un nombre reel b:");
      scanf("%f",&b);

      sum = a+b;
      printf("a+b :%.2f\n",sum);

      ad = a-b;
      printf("a-b:%.2f\n",ad);

      mul = a*b;
      printf("a*b:%.2f\n",mul);

      div = a/b;
      printf("a/b:%.2f",div);

    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{  int Moyenne ;
    printf("Entrer la note d eleve : ");
    scanf("%d",&Moyenne);

    if (Moyenne <10)
    {
        printf("la mention est : recalé\n");
    }
    else if (Moyenne>10 && Moyenne <12)
    {
        printf("la montion est : passable\n");
    }
    else if (Moyenne>12 && Moyenne<=14)
    {
        printf("la montion est : assez bien\n");
    }
    else if (Moyenne>14 && Moyenne<=16 )
    {
        printf("la moyenne est : bien");
    }
    else
    {
        printf(" la moyenne est : très bien ");
    }
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
     int annee,Mois,Jours,Heures,Minutes,Secondes;
     int choix;
     printf("Entrer l'année :");
     scanf("%d",&annee);
     printf("menu de covertion \n");
     printf("1 cavertir l'année en mois   :\n");
     printf("2 cavertir l'année en jours  :\n");
     printf("3 cavertir l'annéé en heurs  :\n");
     printf("4 cavertir l'année en minute :\n");
     printf("5 cavertir l'année en secondes :\n");
     scanf("%d",&choix);
  switch(choix){
   case 1:
       Mois = 12 * annee;
       printf("le nombre des mois est :%d",Mois);
       break;
    case 2:
          Jours = 365*annee;
          printf("le nombre des jours est :%d",Jours);
          break;
    case 3:
          Heures = 24*365*annee;
          printf("le nombre des Heurs est :%d",Heures);
          break;
      case 4:
           Minutes = 24*60*365*annee;
           printf("le nombre des minuts est :%d",Minutes);
           break;
      case 5:
           Secondes = 24*60*60*365*annee;
           printf("le nombre des seconds est :%d",Secondes);
           break;
    default:
        printf("invalid");
        break;
  }

    return 0;
}

*/
/*
#include<stdio.h>
int main()
{ int num;
    printf("Entrer un nombre :\n");
    scanf("%d",&num);

    if(num<0){
        printf("le nombre est negatif");
    }
    if(num>0){
        printf("le nombre est positif ");
    }
    else {
        printf("le nombre est Nul");
    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{  int n;
    printf("entrer un nombre :");
    scanf("%d",&n);

    if(n % 2==0){
    printf("le nombre est paire ");
    }
    else {
        printf("le nombre est impair");
    }

    return 0;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{ int t;
    printf("Entrer la valeure de la temperature :");
    scanf("%d",&t);

   if(t<0)
      printf("leau est : Glace");

   else if(t>0&&t<100)
      printf("leau est : Liquide");

   else
      printf("leau est : Vapeur");

     return 0;
}
*/
/*
#include<stdio.h>
int main()
{  int V;
     printf("Entrer un Alphabet :");
     scanf("%d",&V);

     if(V>=65 && V <90)
        printf("l'alphabet entrer est Majuscule");
     else
        printf(" Lalphabet entrer pas Majuscule");

      return 0;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{ int J,M,A;
   printf("Entrer la date au format jj/mm/annee : ");
   scanf("%d/%d/%d",&J,&M,&A);

   switch(M)
   {
   case 1 :
       printf("%d-janvier-%d",J,A);
       break;
   case 2 :
       printf("%d-fevrier-%d",J,A);
       break;
   case 3 :
       printf("%d-mars-%d",J,A);

   }
    return 0;
}
*/











