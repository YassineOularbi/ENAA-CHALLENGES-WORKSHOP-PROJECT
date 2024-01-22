#include <stdio.h>

int dividedby(int a, int b){
	int r, i;
	r = a/b;
	printf("le resultat est %d\n", r);
	for (i=1; i<=r; i++){
		i = r%i;
	}
	if (i != 0){
		printf ("true");
	} else {
		printf ("false");
	}
}
int main(){
	int a, b;
	printf("Entrer deux nombres :");
	scanf ("%d %d", &a, &b);
	dividedby(a,b);
	return 0;
}
