#include <stdio.h>

int main() {
    int n;

    // Demander le nombre d'éléments
    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tableau[n]; // Déclaration du tableau avec taille dynamique (C99+)

    // Saisie des éléments
    for (int i = 0; i < n; i++) {
        printf("Entrez l'element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    // Affichage des éléments
    printf("Les elements du tableau sont :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }

    printf("\n");
    return 0;
}
