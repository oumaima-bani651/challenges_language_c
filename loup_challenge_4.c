#include <stdio.h>
#include <math.h>  // pour M_PI et pow()

int main() {
    double rayon, volume;

    // Demander le rayon à l'utilisateur
    printf("Entrez le rayon de la sphère : ");
    scanf("%lf", &rayon);

    // Calcul du volume de la sphère
    volume = (4.0 / 3.0) * M_PI * pow(rayon, 3);

    // Affichage du résultat
    printf("Le volume de la sphère est : %.6f\n", volume);

    return 0;
}
