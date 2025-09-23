#include <stdio.h>
#include <stdlib.h>  // Pour malloc et free

int main() {
    int n;

    // Demander le nombre d'éléments
    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Le nombre d'éléments doit être positif.\n");
        return 1;
    }

    // Allocation dynamique du tableau
    int *tableau = (int*) malloc(n * sizeof(int));
    if (tableau == NULL) {
        printf("Erreur d'allocation mémoire.\n");
        return 1;
    }

    // Saisie des éléments
    for (int i = 0; i < n; i++) {
        printf("Entrez l'élément %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    // Affichage des éléments
    printf("\nLes éléments du tableau sont :\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", tableau[i]);
    }

    // Libération de la mémoire
    free(tableau);

    return 0;
}
