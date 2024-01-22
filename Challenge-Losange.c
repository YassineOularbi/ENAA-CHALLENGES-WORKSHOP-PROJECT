#include <stdio.h>
#include <stdlib.h>

int main() {

    int l ;
    int j , i ;

    printf("entrer un nombre : ");
    scanf("%d", &l);

    for(i=1; i<=l ; i++){
        for(j=1 ; j<=l-i ; j++){
        printf("  ");
        }
        for(j=1 ; j<=2*i-1 ; j++){
            printf("* ");

        }
        printf("\n");
    }

        for(i=l-1 ; i>=0 ; i--){
        for(j=1 ; j<=l-i ; j++){
        printf("  ");
        }
        for(j=1 ; j<=2*i-1 ; j++){
            printf("* ");

        }
        printf("\n");
    }



    return 0;
}
