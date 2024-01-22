#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

int isValide(int n){
    char x = 'A';
       while (n <= 1){
    printf("entrer un nombre valide : ");
    scanf("%d",&n);
    }
 
        return n;
    }

bool isPremier(int n){
   int sum=0;
   int x = isValide(n);
           for(int i=1;i<x;i++){
               if(x%i==0){
               sum++;
            }
        }
        if(sum==1)
        return true;
        else
        return false;

}
int main(){
    int x;
    printf("entrer un nombre:");
    scanf("%d",&x);
    if(isPremier(x)) 
    {
        printf("Le nombre %d est premier", x);
    }
    else{
        printf("Le nombre %d n'est pas premier", x);
    }
    return 0;
}
