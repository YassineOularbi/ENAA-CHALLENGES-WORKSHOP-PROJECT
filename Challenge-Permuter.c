#include <stdio.h>
int permuter(int V1, int V2){
	int P;
	P = V1;
	V1 = V2;
	V2 = P;
	printf("%d %d", V1, V2);
}

int main(){
	int a, b;
	printf("Entrer deux variables :");
	scanf("%d %d", &a, &b);
	permuter(a,b);
	return 0;
}
