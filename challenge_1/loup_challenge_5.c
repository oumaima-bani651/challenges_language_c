#include <stdio.h>

int main() {
    double longueur, largeur, surface;

    // Entrée des dimensions du rectangle
    printf("Entrez la longueur du rectangle : ");
    scanf("%lf", &longueur);

    printf("Entrez la largeur du rectangle : ");
    scanf("%lf", &largeur);

    // Calcul de la surface
    surface = longueur * largeur;

    // Affichage du résultat
    printf("La surface du rectangle est : %.2f\n", surface);

    return 0;
}
