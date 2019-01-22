#include <stdio.h>
#include <stdlib.h>
#include "VecteurHead.h"
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//Description :  Addition de deux vecteur
//
//Entrées : deux  type structuré vecteur
//
//Sortie : une addition des deux vecteurs
//
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void AdditionVec(tVect vec, tVect vec2){

    tVect result;

    result.nX = vec.nX+vec.nY;
    result.nY = vec2.nX+vec2.nY;
    result.sens = vec.sens;
    printf("Addition : \nX : %d\nY : %d\n",result.nX,result.nY);
    printf("sens : %d\n",result.sens);
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//Description :  soustraction de deux vecteur
//
//Entrées : deux  type structuré vecteur
//
//Sortie : une soustraction des deux vecteurs
//
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void SouctracVec(tVect vec, tVect vec2){
    
    tVect result;
    result.nX = vec.nX-vec.nY;
    result.nY = vec2.nX*-1+vec2.nY*-1;

    if (vec.sens == 1)
        result.sens = 2;
    if (vec.sens == 2)
        result.sens = 1;
    if (vec.sens == 3)
        result.sens = 4;
    if (vec.sens == 4)
        result.sens = 3;
    printf("Soustraction : \nX : %d\nY : %d\n",result.nX,result.nY);
    printf("sens : %d\n",result.sens);
}
