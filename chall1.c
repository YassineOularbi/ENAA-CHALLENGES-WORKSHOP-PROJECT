#include <stdio.h>
void functionName(char name_Local[20]){
    printf("Bonjour %s \n", name_Local);
}
int main() {
    char name_Global[20];
    printf("Veuillez Entrer votre nom :");
    scanf("%s", name_Global);
    functionName(name_Global);
    return 0;
}
