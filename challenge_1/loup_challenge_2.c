#include <stdio.h>

int main() {
    double a, b;

    // Saisie des deux nombres
    printf("Entrez le premier nombre réel (a) : ");
    scanf("%lf", &a);

    printf("Entrez le deuxième nombre réel (b) : ");
    scanf("%lf", &b);

    // Affichage des résultats
    printf("\nRésultats des opérations :\n");
    printf("a + b = %.2f\n", a + b);
    printf("a - b = %.2f\n", a - b);
    printf("a * b = %.2f\n", a * b);

    // Vérification division par zéro
    if (b != 0) {
        printf("a / b = %.2f\n", a / b);
    } else {
        printf("a / b = Erreur : division par zéro !\n");
    }

    return 0;
}
