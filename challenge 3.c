 #include <stdio.h>
 
 int main() {
    // D�claration des variables
    float A, B;
    // Saisie de la temp�rature en C�
    printf("Entrer la temp�rature en Celesius :");
    scanf("%f", &A);
    // Affectation de formule de calcul
    B = 2.44*A;
    printf("La temp�rature en Fahrenheit est : %.2f", B);
}

