#include "Population.h"

int main(){
    srand(time(NULL));
    // int val;
    // float quali;
    individu newIndiv1;
    individu newIndiv2;
    newIndiv1.longIndiv = 8;
    newIndiv2.longIndiv = 8;
    newIndiv2.indiv = NULL;
    newIndiv1.indiv = NULL;
    newIndiv1.indiv = initializeIndivRecurssif(newIndiv1.indiv,newIndiv1.longIndiv);
    newIndiv2.indiv = initializeIndivRecurssif(newIndiv2.indiv,newIndiv2.longIndiv);
    affichageIndiv(newIndiv1.indiv);
    affichageIndiv(newIndiv2.indiv);
    croisementIdiv(newIndiv1, newIndiv2, 0.5);
    affichageIndiv(newIndiv1.indiv);
    affichageIndiv(newIndiv2.indiv);
    freeIndividu(newIndiv1.indiv);
    freeIndividu(newIndiv2.indiv);
    return 0;
  
}