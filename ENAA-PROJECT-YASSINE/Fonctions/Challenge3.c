
#include <stdio.h>
#include <stdbool.h>

bool isPremier(int a){
    int i, r = 0;
    for(i = 1; i <= a; i++){
        if (a%i == 0){
            r = r + 1;
    }
            
        
    }
    if (r == 2){
        return true;
    } else { 
        return false;
    }
}

int main (){
    int Num;
    printf ("Entrer un nombre :");
    scanf ("%d", &Num);
    if (isPremier(Num)){
        printf ("le nombre %d est premier", Num);
    } else {
        printf ("le nombre %d non premier", Num);
    }
return 0;
}