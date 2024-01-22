#include <stdio.h>

int Factoriel(int a) {
	int i, f = 1;
	for (i=a; i>=1; i--){
	f = f*i;
	}
	printf("le factoriel du nombre est : %d", f);
}
int main(){
	int a;
	printf("entrer un nombre positif :");
	scanf("%d", &a);
	Factoriel(a);
	return 0;
}
