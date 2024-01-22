#include <stdio.h>



int F_Addition(int a1, int a2){
	int r;
	r = a1 + a2;
	printf ("l'addition des deux nombres est : %d\n", r);
}

int F_Soustraction(int s1, int s2){
	int r1;
	r1 = s1 - s2;
	printf ("la soustraction des deux nombres est : %d\n", r1);
}

int F_Multiplication(int m1, int m2){
	int r2;
	r2 = m1 * m2;
	printf ("la multiplication des deux nombres est : %d\n", r2);
}

int main(){
	int x;
	int Num1, Num2;
	printf ("Entrer deux nombres :");
	scanf ("%d %d", &Num1, &Num2);
	printf("choisir l'operateur (Addition (1), Soustraction(2) ou Multiplication(3)) :\n");
	scanf ("%d", &x);
	switch(x){
		case 1 :
			F_Addition (Num1, Num2);
			break;
		case 2 :
			F_Soustraction (Num1, Num2);
			break;
		case 3 :
			F_Multiplication (Num1, Num2);
			break;
		default :
			printf ("L'operateur invalide!\n");	
	}
	return 0;
}

