#include <stdio.h>
#include <stdlib.h>

int Taille = 0;

typedef struct
{

    int heure;
    int jour;
    int mois;
    int annee;

} Date_Echeance;

struct Taches
{

    char Nom_Tache[100];
    char Description_Tache[200];
    Date_Echeance date_Tache;
    char Priorite_Tache[100];
    char Status_Tache[100];
};

struct Taches Tableau_Taches[200];

int Ajouter()
{
    for (int i = Taille; i < Taille + 1; i++)
    {
        printf("Veuillez Entrer le nom de la Tache : ");
        getchar();
        fgets(Tableau_Taches[Taille].Nom_Tache, sizeof(Tableau_Taches[Taille].Nom_Tache), stdin);
        printf("Veuillez Entrer la description de la Tache : ");
        getchar();
        fgets(Tableau_Taches[Taille].Description_Tache, sizeof(Tableau_Taches[Taille].Description_Tache), stdin);
        printf("Veuillez Entrer la date d'echeance et l'heure JJ / MM / YYYY - HH : ");
        scanf("%d / %d / %d - %d", &Tableau_Taches[Taille].date_Tache.jour, &Tableau_Taches[Taille].date_Tache.mois, &Tableau_Taches[Taille].date_Tache.annee, &Tableau_Taches[Taille].date_Tache.heure);
        printf("Veuillez Entrer la priorite de la tache : ");
        getchar();
        fgets(Tableau_Taches[Taille].Priorite_Tache, sizeof(Tableau_Taches[Taille].Priorite_Tache), stdin);
        printf("Veuillez Entrer le statut de la tache : ");
        getchar();
        fgets(Tableau_Taches[Taille].Status_Tache, sizeof(Tableau_Taches[Taille].Status_Tache), stdin);
    }
    Taille++;
    Acceuil();
}


void Afficher()
{
    for (int i = 0; i < Taille; i++)
    {
        printf("Nom de Tache : %s, Description : %s, Date d'echeance : %d/%d/%d - %dh, Priorite : %s, Statut : %s.\n", Tableau_Taches[i].Nom_Tache, Tableau_Taches[i].Description_Tache, Tableau_Taches[i].date_Tache.jour, Tableau_Taches[i].date_Tache.mois, Tableau_Taches[i].date_Tache.annee, Tableau_Taches[i].date_Tache.heure, Tableau_Taches[i].Priorite_Tache, Tableau_Taches[i].Status_Tache);
    }
    Acceuil();
}

void Welcome()
{
    int choix_Welcome;
    printf("######## - OneHand - #########\n");
    printf("### - Gestion des Taches - ###\n");
    printf("\nBienvenue dans l'application de\ngestion de taches developpee \nexclusivement pour l'association\nOneHand par la startup DigitalGear.\n");
    printf("\nCette application console offre\naux membres de l'association\nune plateforme robuste pour creer,\nmodifier, supprimer et visualiser\nleurs taches liees a leurs missions.\n");
    printf("\nChaque tache est accompagnee \nd'informations cruciales telles\nque la description detaillee, \nla date d'echeance, la priorite et \nbien plus encore.\n");
    printf("\n####### - DigitalGear - #######\n");
    printf("Pour continuer presse : 1\n");
    printf("Pour Quitter presse : 0\n");
    scanf("%d", &choix_Welcome);
    switch (choix_Welcome)
    {
    case 1:
        Acceuil();
        break;
    case 0:
        printf("A bientot! vous etes hors du programme.");
        break;
    default:
        printf("Veuillez Entrer un valide choix!");
        Welcome();
        break;
    }
}

int Acceuil()
{

    int choix_Acceuil;
    printf("\n########## - OneHand - ###########\n");
    printf("##### - Gestion des Taches - #####\n");
    printf("                                  \n");
    printf("1- Ajouter une Tache.\n");
    printf("                                  \n");
    printf("2- Modifier une Tache.\n");
    printf("                                  \n");
    printf("3- Supprimer une Tache.\n");
    printf("                                  \n");
    printf("4- Afficher la liste des Taches.\n");
    printf("                                  \n");
    printf("5- Ordonner les Taches.\n");
    printf("                                  \n");
    printf("6- Filtrer les Taches.\n");
    printf("                                  \n");
    printf("7- Rechercher une Tache.\n");
    printf("                                  \n");
    printf("0- Quitter le programme!\n");
    printf("                                  \n");
    printf(" ENAA, Copyright tout droit reserver\n");
    printf("\n######## - DigitalGear - ##########\n");
    printf("#####################################\n");
    printf("Veuillez entrer votre choix : ");
    scanf("%d", &choix_Acceuil);
    switch (choix_Acceuil)
    {
    case 0:
        printf("A bientot! vous etes hors du programme.");
        break;
    case 1:
        Ajouter();
        break;
    case 2:

        break;
    case 3:
        break;
    case 4:
        Afficher();
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    default:
        printf("Veuillez Entrer un valide choix!");
        Acceuil();
        break;
    }
}

int main()
{

    Welcome();
    return 0;
}