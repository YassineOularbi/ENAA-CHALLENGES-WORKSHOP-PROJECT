#include <stdio.h>

int ajouter(int Tableau)
{
    for (int i = 0; i < i + 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (j == i)
            {
                printf("Entrer le code du produit : ");
                scanf("%d", &Tableau[i][j]);
            } else {
                printf("Entrer la quantité à ajouter : ");
                scanf("%d", &Tableau[i][j]);
            }
        }
    }
    main();
}
int retirer(int Tableau)
{
    int Tableau[100][2];
    main();
}
int afficher(int Tableau)
{
    //printf("code : %d\n Quantite : %d\n");
    main();
}
int main()
{
    int choix, *Tableau[100][2];
    printf("### Programme de Gestion de Stock ###\n");
    printf("                                  \n");
    printf("1- Ajouter un produit au stock\n");
    printf("                                  \n");
    printf("2- Retirer un produit du Stock\n");
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
        ajouter(Tableau);
        break;
    case 2:
        //printf("Entrer le code du produit : ");
        //scanf("%d", &codeProduit);
        // printf("Entrer la quantité à retirer : ");
        // scanf("%d", &Quantite);
        retirer(Tableau);
        break;
    case 3:
        // printf("Le stock total\n;");
        afficher(Tableau);
        break;
    case 4:
        printf("Vous etes hors du programme, A bientot!");
        break;
    default:
        printf("Veuillez entrer un valid choix!\n");
        main();
        break;
    }
    return 0;
}