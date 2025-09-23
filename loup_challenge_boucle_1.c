#include <stdio.h>

int main() {
    int nombre;

    // Demander le nombre
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    // Afficher la table en ordre décroissant de 10 à 1
    for (int i = 10; i >= 1; i--) {
        printf("%d * %d = %d\n", nombre, i, nombre * i);
    }

    return 0;
}
