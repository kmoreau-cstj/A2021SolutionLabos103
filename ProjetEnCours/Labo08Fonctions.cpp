#include "Labo08Fonctions.h"


int genererAlea(int min, int max)
{
   return rand()% (max - min +1) + min;
}
