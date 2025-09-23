#include <stdio.h>

int main() {
    float temperature;

    // Demander à l'utilisateur d'entrer la température
    printf("Entrez la température en Celsius : ");
    scanf("%f", &temperature);

    // Vérifier l'état de l'eau selon la température
    if (temperature < 0) {
        printf("L'eau est à l'état solide.\n");
    } else if (temperature < 100) {
        printf("L'eau est à l'état liquide.\n");
    } else {
        printf("L'eau est à l'état gazeux.\n");
    }

    return 0;
}
