// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

bool functionNum(int Num_local){
    if (Num_local%2 != 0){
    return true;
    } else {
    return false;
    }
}
int main() {
    int Num_global;
    printf("Veuillez Entrer un nombre :");
    scanf("%d", &Num_global);
    if (functionNum(Num_global)){
    	printf("le nombre %d est impair", Num_global);
	} else {
		printf("le nombre %d est pair", Num_global);
	}
return 0;
}
 