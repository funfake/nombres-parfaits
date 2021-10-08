#include "mesFonctions.h"

int sommeEntiers(std::vector<int> vectEntiers) {
    // Using a for loop with index
    // cf. https://riptutorial.com/cplusplus/example/1678/iterating-over-std--vector
    /*for(std::size_t i = 0; i < vectEntiers.size(); ++i) {
        std::cout << vectEntiers[i] << "\n";
    }  */
    int somme = 0;

    for(int vectEntier : vectEntiers) {
        somme += vectEntier;
    }
    return somme;
}

void afficherSommeEntiers(std::vector<int> vectEntiers) {
    // Cf. https://www.geeksforgeeks.org/last-element-of-vector-in-cpp-accessing-and-updating/
    // Cf. https://www.w3schools.com/cpp/cpp_conditions_shorthand.asp
    for(int vectEntier : vectEntiers) {
        std::cout << vectEntier;
        std::cout << ((vectEntier != vectEntiers.back()) ? "+" : "");
    }
}

std::vector<int> recupDiviseurs(int entier) {
    // Cf. https://www.geeksforgeeks.org/find-divisors-natural-number-set-1/
    std::vector<int> diviseurs;
    for (int i = 1; i < entier; i++) {
        if (entier % i == 0) {
            diviseurs.push_back(i);
        }
    }
    return diviseurs;
}

bool estUnEntierParfait(int e) {
    // recupérer la liste des diviseurs
    std::vector<int> diviseurs = recupDiviseurs(e);
    // récupérer la somme
    int somme = sommeEntiers(diviseurs);
    return (somme == e);
}
