#include<stdio.h>

int partition(int Tableau[], int bas, int haut){
  int TempSort, TempPivot;
  int pivot = Tableau[haut];
  int i = bas - 1;
  int j;
  for (j = bas; j<haut ; j++){
    if (Tableau[j] <= pivot) {
      i ++;
        TempSort = Tableau[j];
        Tableau[j] = Tableau[i];
        Tableau[i] = TempSort;
    } 
  TempPivot = Tableau[i];
  Tableau[i] = Tableau[j];
  Tableau[j] = TempPivot;
  }

  return i + 1;
}

int QuickSort(int Tableau[], int bas, int haut){
    if (bas<haut){
    int pivot = partition(Tableau, bas, haut);
    QuickSort(Tableau, bas, pivot -1);
    QuickSort(Tableau, pivot + 1, haut);
    }
}



int main(){
    int Taille;
    printf ("Entrer la taille du tableau :");
    scanf("%d", &Taille);
    int Tableau[Taille], i;
    printf("Entrer les elements du Tableau :\n");
    for (i = 0; i<Taille; i++){
        printf("Tableau[%d] =", i);
        scanf("%d", &Tableau[i]);
    }
    QuickSort(Tableau, 0, Taille-1);
    printf ("Le Tableau apres QuickSort : \n");
    for ( i = 0; i<Taille; i++){
    printf ("Tableau[%d] = %d \n", i, Tableau[i]);
    }
}