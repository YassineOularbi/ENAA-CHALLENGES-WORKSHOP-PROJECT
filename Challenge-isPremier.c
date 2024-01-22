#include <stdio.h>
#include <stdbool.h>

void isPremier(int a){
    int i, r = 0;
    for(i = 1; i <= a; i++){
        if (a%i == 0){
            r = r + 1;
    }
            
        
    }
    if (r == 2){
        printf ("True");
    } else { 
        printf ("False");
    }
}

int main (){
    int Num;
    printf ("Entrer un nombre :");
    scanf ("%d", &Num);
    isPremier(Num);
return 0;
}
