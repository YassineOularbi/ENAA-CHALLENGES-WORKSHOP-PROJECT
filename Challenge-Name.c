#include <stdio.h>
void functionName(char n[20]){
    printf("Bonjour %s \n", n);
}
int main() {
    char name[20];
    printf("Veuillez Entrer votre nom :");
    scanf("%s", name);
    functionName(name);
    return 0;
}
