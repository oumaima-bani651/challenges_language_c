#include <stdio.h>

int main() {
    int tab[4];  
    int n, i;

    // Demande le nombre d'elements
    printf("entrer les element:\n ");
    scanf("%d", &n);

    
    printf("%d:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tab[i]);
    }

    
    printf("Tableau inverse :\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", tab[i]);
    }

    printf("\n");
    return 0;
}
