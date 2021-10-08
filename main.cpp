#include <iostream>
#include <vector>
#include "mesFonctions.h"

/*
 * recupDiviseurs(entier), retourne vecteur d’entier + tous diviseurs stricts
 * sommeEntiers(vecteur d’entiers), retourne somme de ses valeurs
 * afficherSommeEntiers(vecteur d’entiers), les afficheséparés par des ‘+’
 * */

int main()
{
    /*  on veut fournir des « composants »
        faciles à utiliser : on se met autant que possible au service du code appelant même si ça implique de
        fournir un travail supplémentaire au niveau du code appelé
     */
    for(int e = 1; e <= 10000; e++) {
        if (estUnEntierParfait(e)) {
            std::cout << e << " = ";
            afficherSommeEntiers(recupDiviseurs(e));
            std::cout << std::endl;
        }
    }
    return 0;
}