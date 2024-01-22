#include <stdio.h>

int Bubble_Sort (int Tableau_Bubble[], int Taille_Bubble){
    int i, j, Temp;
    for (i = 0; i<Taille_Bubble; i++){
        for (j = i+1 ; j < Taille_Bubble ; j++){
            if (Tableau_Bubble[i]>Tableau_Bubble[j]){
            Temp = Tableau_Bubble[i];
            Tableau_Bubble[i] = Tableau_Bubble[j];
            Tableau_Bubble[j] = Tableau_Bubble[i];
        	}
		}
	printf ("%d", Tableau_Bubble[i]);
    printf("\n");	
	}
}
int main() {
    int Tableau[] = {0,9,3,1,2}, Taille, i;
    Taille = sizeof Tableau/sizeof Tableau[1];
    printf ("Les elements de Tableau comme suit :\n");
    for (i = 0; i<Taille; i++){
        printf ("%d", Tableau[i]);
        printf("\n");
    	}
    printf ("les elements de Tableau apres Tri :\n");
	Bubble_Sort(Tableau, Taille);
return 0;
}

