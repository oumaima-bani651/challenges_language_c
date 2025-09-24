#include <stdio.h>
#include <string.h>

int main() {
    char c1[100];
    char c2[100];
    char *Pc1 = c1;
    char *Pc2 = c2;

    printf("Entrez une chaine de caracteres  : \n");
    fgets(c1, sizeof(c1), stdin);

    printf("Entrez une autre chaine de caracteres  : \n");
    fgets(c2, sizeof(c2), stdin);

    c1[strcspn(c1, "\n")] = '\0';//// '\n'
    c2[strcspn(c2, "\n")] = '\0';

    Pc1 = c1 + strlen(c1);// '\0'

    while (*Pc2 != '\0') {
        *Pc1 = *Pc2;
        Pc1++;
        Pc2++;
    }
    *Pc1 = '\0';

    printf("La chaine concatenee est : %s\n", c1);

    return 0;
}
