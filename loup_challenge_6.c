#include <stdio.h>

int main() {
    int nombre;
    int millier, centaine, dizaine, unite;
    int inverse;

    // Saisie du nombre
    printf("Entrez un nombre entier à 4 chiffres : ");
    scanf("%d", &nombre);

    // Vérification que le nombre est bien à 4 chiffres
    if (nombre < 1000 || nombre > 9999) {
        printf("Erreur : le nombre doit être composé de 4 chiffres.\n");
        return 1; // Quitte le programme avec une erreur
    }

    // Extraction des chiffres
    millier  = nombre / 1000;            // 1er chiffre
    centaine = (nombre / 100) % 10;      // 2e chiffre
    dizaine  = (nombre / 10) % 10;       // 3e chiffre
    unite    = nombre % 10;              // 4e chiffre

    // Construction de l'inverse
    inverse = unite * 1000 + dizaine * 100 + centaine * 10 + millier;

    // Affichage du résultat
    printf("L'inverse de %d est : %d\n", nombre, inverse);

    return 0;
}
