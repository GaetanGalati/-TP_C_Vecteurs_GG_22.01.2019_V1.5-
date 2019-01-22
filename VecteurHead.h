#ifndef VECTEURHEAD_H_INCLUDED
#define VECTEURHEAD_H_INCLUDED
typedef struct tVect
{
    int nX;
    int nY;
    int sens;
    //char direction;
}tVect;

extern void AdditionVec(tVect vec, tVect vec2);
extern void SouctracVec(tVect vec, tVect vec2);
#endif // VECTEURHEAD_H_INCLUDED
