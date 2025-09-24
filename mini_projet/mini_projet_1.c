#include <stdio.h>
#include <string.h>

#define MAX 100

char titres[MAX][100];
char auteurs[MAX][100];
float prix[MAX];
int quantites[MAX];
int n = 0; // Nombre de livres

// Fonction pour ajouter un livre
void ajouterLivre() {
    if (n >= MAX) {
        printf("Stock plein !\n");
        return;
    }

    printf("Titre: ");
    scanf(" %[^\n]", titres[n]);

    printf("Auteur: ");
    scanf(" %[^\n]", auteurs[n]);

    printf("Prix: ");
    scanf("%f", &prix[n]);

    printf("Quantite: ");
    scanf("%d", &quantites[n]);

    n++;
    printf("Livre ajoute avec succes.\n");
}

// Afficher tous les livres
void afficherLivres() {
    if (n == 0) {
        printf("Aucun livre disponible.\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        printf("\nLivre %d:\n", i + 1);
        printf("Titre: %s\n", titres[i]);
        printf("Auteur: %s\n", auteurs[i]);
        printf("Prix: %.2f\n", prix[i]);
        printf("Quantite: %d\n", quantites[i]);
    }
}

// Rechercher un livre par titre
void rechercherLivre() {
    char titreRecherche[100];
    printf("Titre du livre a rechercher: ");
    scanf(" %[^\n]", titreRecherche);

    int trouve = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(titres[i], titreRecherche) == 0) {
            printf("\nLivre trouve:\n");
            printf("Auteur: %s\n", auteurs[i]);
            printf("Prix: %.2f\n", prix[i]);
            printf("Quantite: %d\n", quantites[i]);
            trouve = 1;
            break;
        }
    }

    if (!trouve)
        printf("Livre non trouve.\n");
}

// Modifier la quantite
void modifierQuantite() {
    char titre[100];
    printf("Titre du livre a modifier: ");
    scanf(" %[^\n]", titre);

    int trouve = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(titres[i], titre) == 0) {
            printf("Nouvelle quantite: ");
            scanf("%d", &quantites[i]);
            printf("Quantite mise a jour.\n");
            trouve = 1;
            break;
        }
    }

    if (!trouve)
        printf("Livre non trouve.\n");
}

// Supprimer un livre
void supprimerLivre() {
    char titre[100];
    printf("Titre du livre a supprimer: ");
    scanf(" %[^\n]", titre);

    int trouve = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(titres[i], titre) == 0) {
            // Supprimer en décalant les éléments
            for (int j = i; j < n - 1; j++) {
                strcpy(titres[j], titres[j + 1]);
                strcpy(auteurs[j], auteurs[j + 1]);
                prix[j] = prix[j + 1];
                quantites[j] = quantites[j + 1];
            }
            n--;
            printf("Livre supprime.\n");
            trouve = 1;
            break;
        }
    }

    if (!trouve)
        printf("Livre non trouve.\n");
}

//  total des livres
void totalLivres() {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += quantites[i];
    }
    printf("Nombre total de livres en stock: %d\n", total);
}

// Menu principal
int main() {
    int choix;

    do {
        printf("\n--- Menu ---\n");
        printf("1. Ajouter un livre\n");
        printf("2. Afficher tous les livres\n");
        printf("3. Rechercher un livre\n");
        printf("4. Modifier la quantite\n");
        printf("5. Supprimer un livre\n");
        printf("6. Total des livres en stock\n");
        printf("0. Quitter\n");
        printf("Votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: ajouterLivre(); break;
            case 2: afficherLivres(); break;
            case 3: rechercherLivre(); break;
            case 4: modifierQuantite(); break;
            case 5: supprimerLivre(); break;
            case 6: totalLivres(); break;
            case 0: printf("Au revoir !\n"); break;
            default: printf("Choix invalide.\n");
        }
    } while (choix != 0);

    return 0;
}
