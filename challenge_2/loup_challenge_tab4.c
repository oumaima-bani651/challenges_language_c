#include <stdio.h>

int main() {
    int n, i;
    int tableau[100];  // Taille max fixe pour simplifier
    int facteur;

    // Demander le nombre d'éléments
    printf("Entrez le nombre d'éléments (max 100) : ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Nombre invalide.\n");
        return 1;
    }

    // Saisie des éléments du tableau
    for (i = 0; i < n; i++) {
        printf("Entrez l'élément %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    // Demander le facteur de multiplication
    printf("Entrez le facteur de multiplication : ");
    scanf("%d", &facteur);

    // Multiplication des éléments par le facteur
    for (i = 0; i < n; i++) {
        tableau[i] = tableau[i] * facteur;
    }

    // Affichage du tableau modifié
    printf("\nTableau après multiplication par %d :\n", facteur);
    for (i = 0; i < n; i++) {
        printf("%d\n", tableau[i]);
    }

    return 0;
}
