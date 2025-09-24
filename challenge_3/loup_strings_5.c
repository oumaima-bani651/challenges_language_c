#include <stdio.h>
#include <string.h>

int main() {
    char c[100];
    

    printf("Entrez une chaine de caracteres  : \n");
    fgets(c, sizeof(c), stdin);
    
    for(int i = strlen(c)-1; i>=0; i--)
    printf("%c", c[i]);

    return 0;
}