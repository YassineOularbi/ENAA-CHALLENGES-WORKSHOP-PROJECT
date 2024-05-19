#include <stdio.h>
#include <math.h>

int main() {
    // Déclaration des variables
    float B, E;
    // Saisie la base et l'exposant
    printf("Entrer la base :");
    scanf("%f", &B);
    printf("Entrer l'exposant :");
    scanf("%f", &E);
    // Affectation de formule de calcul
    printf("La puissance : %.2f", pow(B,E));
}

