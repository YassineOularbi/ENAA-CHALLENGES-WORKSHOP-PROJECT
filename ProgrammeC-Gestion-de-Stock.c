#include <stdio.h>
int Taille = 0;
int TableauCode[1000];
int TableauQuantite[1000];
int search(int CodeProduit){
    for (int i = 1; i <= Taille; i++){
        if (TableauCode[i] == CodeProduit){
            return i;
    }
}
    return -1;
}
void ajouter(int CodeProduit, int Quantite){
    int res = search(CodeProduit);
    if (res == -1){
        Taille++;
        TableauCode[Taille] = CodeProduit;
        TableauQuantite[Taille] = Quantite;
    } else {
        TableauQuantite[res]+= Quantite;
    }
    printf("Operation Terminer!");
    Acceuil();
}

void retirer(int CodeProduit, int Quantite){
    int res = search(CodeProduit);
    if(res == -1){
        printf("Le produit a retirer n'exist pas!");
        Acceuil();
    } else {
        TableauQuantite[res]-= Quantite;
    }
    printf("Operation Terminer!");
    Acceuil();
}

void afficher(){
    for (int i = 1; i <= Taille ; i++ ){
        printf("Code du produit : %d, Quantite : %d\n", TableauCode[i], TableauQuantite[i]);
    }
    Acceuil();
}
void Acceuil()
{
    int choix, CodeProduit, Quantite;
    printf("\n#####################################\n");
    printf("### Programme de Gestion de Stock ###\n");
    printf("                                  \n");
    printf("1- Ajouter un produit au stock\n");
    printf("                                  \n");
    printf("2- Retirer un produit du stock\n");
    printf("                                  \n");
    printf("3- Afficher le stock total\n");
    printf("                                  \n");
    printf("4- Quitter le programme\n");
    printf("                                  \n");
    printf(" ENAA, Copyright tout droit reserver\n");
    printf("#####################################\n");
    printf("Veuillez entrer votre choix : ");
    scanf("%d", &choix);
    switch (choix)
    {
    case 1:
        printf("Entrer le code Produit : ");
        scanf("%d", &CodeProduit);
        printf("Entrer la quantite a ajouter : ");
        scanf("%d", &Quantite);
        search(CodeProduit);
        ajouter(CodeProduit, Quantite);
        break;
    case 2:
        printf("Entrer le code Produit : ");
        scanf("%d", &CodeProduit);
        printf("Entrer la quantite a retirer : ");
        scanf("%d", &Quantite);
        search(CodeProduit);
        retirer(CodeProduit, Quantite);
    case 3:
        printf("Le Stock Total !\n");
        afficher();
        break;
    case 4:
        printf("Vous etes hors du programme, A bientot!");
        break;
    default:
        printf("Veuillez entrer un valid choix!\n");
        Acceuil();
        break;
    }
}

int main(){
    Acceuil();
}