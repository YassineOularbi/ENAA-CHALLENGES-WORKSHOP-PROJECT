 #include <stdio.h>
 
 int main() {
    // Declaration des variables
    float A, B;
    // Saisie de la temperature en Celsius
    printf("Entrer la temperature en Celesius :");
    scanf("%f", &A);
    // Affectation de formule de calcul
    B = 2.44*A;
    printf("La temperature en Fahrenheit est : %.2f", B);
}

