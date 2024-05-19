#include <stdio.h>
#include <string.h>


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
	char operateur[30];
	char chaine_Multiplication[] = "Multiplication";
	int Num1, Num2, Switch;
	printf ("Entrer deux nombres :");
	scanf ("%d %d", &Num1, &Num2);
	printf("choisir l'operateur (Addition, Soustraction ou Multiplication) :\n");
	scanf ("%s", &operateur);
	Switch = strcmp (operateur,chaine_Multiplication);
	if (Switch < 0){
	    F_Addition(Num1, Num2);
	} else if (Switch > 0){
	    F_Soustraction(Num1, Num2);
	} else if (Switch == 0){
	    F_Multiplication(Num1, Num2);
	} else { 
	    printf ("l'operateur est invalide!");
	}
	return 0;
}

