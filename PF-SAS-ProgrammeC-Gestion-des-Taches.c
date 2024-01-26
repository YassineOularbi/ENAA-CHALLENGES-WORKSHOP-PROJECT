#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
struct Taches Remplace[200];

int Chercher(char Nom_Chercher[100])
{

    for (int i = 0; i < Taille; i++)
    {
        int resultCompare = strcmp(Tableau_Taches[i].Nom_Tache, Nom_Chercher);
        if (resultCompare == 0)
        {
            return i;
        }
    }
    return -1;
}

void Ajouter()
{
    for (int i = Taille; i < Taille + 1; i++)
    {
       // printf("Veuillez Entrer le nom de la Tache : ");
        //scanf(" %[^\n]s", Tableau_Taches[i].Nom_Tache);
        //printf("Veuillez Entrer la description de la Tache : ");
        //scanf(" %[^\n]s", Tableau_Taches[i].Description_Tache);
        printf("Veuillez Entrer la date d'echeance et l'heure JJ / MM / YYYY - HH : ");
        scanf("%d / %d / %d", &Tableau_Taches[i].date_Tache.jour, &Tableau_Taches[i].date_Tache.mois, &Tableau_Taches[i].date_Tache.annee, &Tableau_Taches[i].date_Tache.heure);
        // if (Tableau_Taches[Taille].date_Tache.jour < 1 || Tableau_Taches[Taille].date_Tache.jour > 31 || Tableau_Taches[Taille].date_Tache.mois < 1 || Tableau_Taches[Taille].date_Tache.mois > 12 || Tableau_Taches[Taille].date_Tache.annee < 2024 || Tableau_Taches[Taille].date_Tache.annee > 2030 || Tableau_Taches[Taille].date_Tache.heure < 0 || Tableau_Taches[Taille].date_Tache.heure > 24 ){
        // printf("Veuillez Entrer une valide date  et l'heure sous forme (JJ / MM / YYYY - HH) : ");
        //  scanf("%d / %d / %d - %d", &Tableau_Taches[Taille].date_Tache.jour, &Tableau_Taches[Taille].date_Tache.mois, &Tableau_Taches[Taille].date_Tache.annee, &Tableau_Taches[Taille].date_Tache.heure);
        //  }
        //printf("Veuillez Entrer la priorite de la tache : ");
        //scanf(" %[^\n]s", Tableau_Taches[i].Priorite_Tache);
        //printf("Veuillez Entrer le statut de la tache : ");
        //scanf(" %[^\n]s", Tableau_Taches[i].Status_Tache);
    }
    Taille++;
    Acceuil();
}

void Supprimer()
{
    char Nom_Supprimer[100];
    printf("Entrer le nom de la tache a supprimer : ");
    scanf(" %[^\n]s", Nom_Supprimer);
    int res = Chercher(Nom_Supprimer);
    if (res == -1)
    {
        printf("La tache n'existe pas!");
    }
    else
    {
        for (int i = res; i < Taille; i++)
        {
            Tableau_Taches[i] = Tableau_Taches[i + 1];
            Taille--;
        }
        printf("La suppression terminer!");
    }
    Acceuil();
}

void Modifier()
{
    char Nom_Modifier[100];
    printf("Entrer le nom de la tache a modifier : ");
    scanf(" %[^\n]s", Nom_Modifier);
    int res = Chercher(Nom_Modifier);
    if (res == -1)
    {
        printf("La tache n'existe pas!");
    }
    else
    {
        printf("Entrer les modification de cette tache :\n");
        printf("Entrer la nouvelle description de la tache : ");
        scanf("  %[^\n]s", Tableau_Taches[res].Description_Tache);
        printf("Entrer la nouvelle date d'echeance et l'heure JJ / MM / YYYY - HH : ");
        scanf("%d / %d / %d - %d", &Tableau_Taches[res].date_Tache.jour, &Tableau_Taches[res].date_Tache.mois, &Tableau_Taches[res].date_Tache.annee, &Tableau_Taches[res].date_Tache.heure);
        printf("Entrer la nouvelle priorite de la tache : ");
        scanf(" %[^\n]s", Tableau_Taches[res].Priorite_Tache);
        printf("Entrer le nouveau statut de la tache : ");
        scanf(" %[^\n]s", Tableau_Taches[res].Status_Tache);
        printf("La modification terminer!");
    }
    Acceuil();
}
void TriCroissant()
{
    for (int i = 0; i < Taille; i++)
    {
        for (int j = i + 1; j < Taille; j++)
        {
            if (Tableau_Taches[i].date_Tache.annee >= Tableau_Taches[j].date_Tache.annee || Tableau_Taches[i].date_Tache.mois >= Tableau_Taches[j].date_Tache.mois || Tableau_Taches[i].date_Tache.jour >= Tableau_Taches[j].date_Tache.jour)
            {
                Remplace[i] = Tableau_Taches[i];
                //Tableau_Taches[i] = Tableau_Taches[j];
                //Tableau_Taches[j] = Remplace[i];
            }

        }
    }
}
void Ordonner()
{
    int Choix_Triage;
    printf("Veuillez Entrer l'Ordre de triage :");
    printf("1. Triage par date croissant.");
    printf("2. Triage par date decroissant.");
    scanf("%d", Choix_Triage);
    switch (Choix_Triage)
    {
    case 1:
        TriCroissant();
        break;
    case 2:
        break;
    }
    Acceuil();
}

void Afficher()
{
    for (int i = 0; i < Taille; i++)
    {
        //printf("Nom de Tache : %s, Description : %s, Date d'echeance : %d/%d/%d - %dh, Priorite : %s, Statut : %s.\n", Tableau_Taches[i].Nom_Tache, Tableau_Taches[i].Description_Tache, Tableau_Taches[i].date_Tache.jour, Tableau_Taches[i].date_Tache.mois, Tableau_Taches[i].date_Tache.annee, Tableau_Taches[i].date_Tache.heure, Tableau_Taches[i].Priorite_Tache, Tableau_Taches[i].Status_Tache);
        printf("Nom de Tache : %s, Description : %s, Date d'echeance : %d/%d/%d - %dh, Priorite : %s, Statut : %s.\n", Remplace[i].Nom_Tache, Remplace[i].Description_Tache, Remplace[i].date_Tache.jour, Remplace[i].date_Tache.mois, Remplace[i].date_Tache.annee, Remplace[i].date_Tache.heure, Remplace[i].Priorite_Tache, Remplace[i].Status_Tache);
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
        Modifier();
        break;
    case 3:
        Supprimer();
        break;
    case 4:
        Afficher();
        break;
    case 5:
        Ordonner();
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
