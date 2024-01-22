#include <stdio.h>

int main() {
    // Déclaration des variables
    int A, B, C;
    // Saisie des trois entiers au clavier
    printf("Entrer le premier nombre entier:");
    scanf("%d", &A);
    printf("Entrer le deuxieme nombre entier:");
    scanf("%d", &B);
    printf("Entrer le troisieme nombre entier:");
    scanf("%d", &C);
    // Comparaison pour trouver le plus grand
    if (A > B && A > C) {
    printf("Le plus grand est %d", A);
    }
    else if (B > A && B > C) {
    printf("Le plus grand est %d", B);
    }
    else {
    printf("Le plus grand est %d", C);
    }
    return 0;
}

