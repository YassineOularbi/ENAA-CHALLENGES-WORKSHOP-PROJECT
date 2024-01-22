#include <stdio.h>
int functionMax (int Num_l, int Max_4, int i){
	for (i=1; i<=4; i++){
		printf("veuillez entrer un nombre :");
		scanf("%d", Num_l);
		if (Num_l>=Max_4){
			Max_4 = Num_l;
		}
	}
	printf("le max de quatres entiers est : %d", Max_4);
}

int main(){
	int Num_l, Max_4 = 0, i;
	functionMax (Num_l,Max_4, i);
	return 0;
}
