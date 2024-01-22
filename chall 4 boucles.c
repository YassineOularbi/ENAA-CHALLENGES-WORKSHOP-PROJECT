#include <stdio.h>

int main() {
    int N, S = 0, M = 0;
    while (N != 0){
         printf("Entrer un nombre positif inférieur a 100 :");
         scanf("%d", &N);
        if (N==0)
        break;
        if (N>0 && N <= 100)
        S = S + N;
        printf("la somme des nombres est  %d\n",S);
        if (N > M && N<=100)
        M = N;
        printf("le max des nombres est  %d \n",M);

        }
    printf("l'operation est terminee \n la somme des nombres est %d \n le max des nombres est %d ",S,M);

}
