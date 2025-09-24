#include <stdio.h>

int main() {
    int n;

    // Demande du nombre d'éléments
    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    

    int tab[n];

    // Saisie des éléments
    printf("Entrez les elements du tableau :\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    // Recherche du minimum
    int min = tab[0];
    for (int i = 1; i < n; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
    }

    // Affichage du résultat
    printf("Le plus petit element est : %d\n", min);

    return 0;
}

