#include <iostream>
using namespace std;

// Fonction qui affiche le nombre de paramètres 
void fonction(int *tab, long long cmpt) {
    cout << "Nombre de paramètres : " << cmpt << endl;
}

int main() {
    long long cmpt = 1; // Initialiser le compteur à 0

    while (true) {  // Boucle infinie
        cmpt = cmpt+1; // Incrémenter le nombre d'éléments
        // Essayer d'allouer un nouveau tableau avec le nombre actuel d'éléments
        
            int *tab = new int[cmpt]; // Allocation de mémoire
            // Appeler la fonction avec le tableau et le nombre d'éléments
            fonction(tab, cmpt);

            // Libérer la mémoire allouée pour le tableau
            delete[] tab;
    }
    return 0;
}
