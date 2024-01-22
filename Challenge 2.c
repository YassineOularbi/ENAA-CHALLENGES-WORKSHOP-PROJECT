#include <stdio.h>

int main() {
    // Déclaration des variables
    float Lg, Lr, A;
    // Saisie de longueur et largeur du rectangle
    printf("Entrer la longueur du rectangle :");
    scanf("%f", &Lg);
    printf("Entrer la largeur du rectangle :");
    scanf("%f", &Lr);
    // Affectation de formule de calcul
    A = Lg*Lr;
    printf("L'Air de rectangle est : %.2f", A);
}

