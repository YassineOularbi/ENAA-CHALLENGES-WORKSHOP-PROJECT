 #include <stdio.h>
 
 int main() {
    // Déclaration des variables
    float A, B;
    // Saisie de la température en C°
    printf("Entrer la température en Celesius :");
    scanf("%f", &A);
    // Affectation de formule de calcul
    B = 2.44*A;
    printf("La température en Fahrenheit est : %.2f", B);
}

