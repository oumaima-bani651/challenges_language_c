#include <stdio.h>

int main() {
    int n, i, max;
    int tableau[100];  // Taille maximale fixe

    // Demander le nombre d'éléments (max 100)
    printf("Entrez le nombre d'éléments (max 100) : ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Nombre invalide.\n");
        return 1;
    }

    // Saisie des éléments
    for (i = 0; i < n; i++) {
        printf("Entrez l'élément %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    // Initialiser max au premier élément
    max = tableau[0];

    // Chercher le max
    for (i = 1; i < n; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    // Affichage du résultat
    printf("Le plus grand élément est : %d\n", max);

    return 0;
}
