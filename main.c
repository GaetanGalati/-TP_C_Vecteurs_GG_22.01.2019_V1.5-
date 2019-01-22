#include <stdio.h>
#include <stdlib.h>
#include "VecteurHead.h"

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//Description :  Addition ou soustraction de deux vecteur
//
//Entrées : Un type structuré vecteur
//
//Sortie : une addition ou une soustraction
//
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
int main()
{
    int nChoix;
    tVect vec;
    tVect vec2;

    printf("Entrez le premier point du premier vecteur !\n");
    scanf("%d",&vec.nX);
    printf("Entrez le second point du premier vecteur !\n");
    scanf("%d",&vec.nY);
    printf("X : %d\nY : %d\n",vec.nX,vec.nY);
    printf("Entrez le sens (1: haut 2: bas 3:Gauche 4:Droite)");
    scanf("%d",&vec.sens);

    printf("Entrez le premier point du second vecteur !\n");
    scanf("%d",&vec2.nX);
    printf("Entrez le second point du second vecteur !\n");
    scanf("%d",&vec2.nY);
    printf("Entrez le sens (1: haut 2: bas 3:Gauche 4:Droite)");
    scanf("%d",&vec2.sens);
    printf("X : %d\nY : %d\n",vec2.nX,vec2.nY);
    printf("\n");
    printf("Addition, ou soutraction ? (1,2)");

    scanf("%d",&nChoix);

    switch (nChoix){

            case 1: AdditionVec(vec,vec2);break;
            case 2: SouctracVec(vec,vec2);break;
            default:;break;
    }



    return 0;
}

