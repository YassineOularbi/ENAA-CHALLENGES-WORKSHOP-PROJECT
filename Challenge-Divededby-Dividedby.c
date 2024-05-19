#include <stdio.h>
#include <stdbool.h>

int divededby(int a, int b){
    int r;
    r = a/b;
return r;

}

bool dividedby(int a, int b){
    int i, j= 0;
    int x = divededby(a,b);
    for(i = 1; i <= x; i++){
        if (x%i == 0){
            j++;
    }        
    }
        if (j == 2){
        return true;
    } else { 
        return false;
    }
}

int main (){
    int Num1, Num2;
    printf ("Entrer deux nombres entiers :");
    scanf ("%d %d", &Num1, &Num2);
    if (dividedby(Num1,Num2)){
        printf ("le resultat des deux nombres %d et %d est premier", Num1, Num2);
    } else {
        printf ("le resultat des deux nombres %d et %d est non premier", Num1, Num2);
    }
return 0;
}