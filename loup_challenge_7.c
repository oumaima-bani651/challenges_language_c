#include <stdio.h>

int main() {
    double vitesse_kmh, vitesse_ms;

    // Demande de la vitesse en km/h
    printf("Entrez la vitesse en kilomètres par heure (km/h) : ");
    scanf("%lf", &vitesse_kmh);

    // Conversion en m/s
    vitesse_ms = vitesse_kmh * 0.27778;

    // Affichage du résultat
    printf("La vitesse en mètres par seconde (m/s) est : %.4f\n", vitesse_ms);

    return 0;
}
