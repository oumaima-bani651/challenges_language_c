#include <stdio.h>

int main() {
    char chaine[100];
    int i = 0;

    printf("Entrez une chaine de caracteres : ");
    fgets(chaine, sizeof(chaine), stdin);

    while (chaine[i] != '\0' && chaine[i] != '\n') {
        i++;
    }

    printf("La longueur de la chaine est : %d\n", i);

    return 0;
}
