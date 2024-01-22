#include <stdio.h>
int FunctionMax_2(int Num1_2, int Num2_2){
	if (Num1_2>Num2_2){
		return Num1_2;
	} else {
		return Num2_2;
	}
}
int FunctionMax_4(int Num1_4, int Num2_4, int Num3_4, int Num4_4){

		if (FunctionMax_2(Num1_4,Num2_4)>FunctionMax_2(Num3_4,Num4_4)){
			return FunctionMax_2(Num1_4,Num2_4);
		} else {
			return FunctionMax_2(Num3_4,Num4_4);	
		}
}
int main (){
	int Num1, Num2, Num3, Num4;
	printf("veuillez entrer quatre nombres entiers :");
	scanf("%d %d %d %d", &Num1, &Num2, &Num3, &Num4);
	printf("Le max des quatres nombres est : %d", FunctionMax_4(Num1, Num2, Num3, Num4));
	return 0;
}
