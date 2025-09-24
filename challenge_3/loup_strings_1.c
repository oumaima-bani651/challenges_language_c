#include <stdio.h>
#include <string.h>

int main() {
    char c[100];

    printf("Entrer les elements de la chaine : ");
    fgets(c, sizeof(c), stdin);  //  gets()

    printf("Vous avez entre : %s\n", c);

    return 0;
}


