#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Acceuil();
void Ajouter();
void Modifier();
void Supprimer();
void Ordonner();
void Afficher();
void BubbleSort_Croissant();
void BubbleSort_Decroissant();
void Filtrer();
void Filtrage_Priorite();
void Filtrage_Status();
void Filtrage_DateEcheance();
void Rechercher();
int Chercher(char Nom_Chercher[100]);
void Welcome();
void Enregistrer_Fichier();

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

void Welcome()
{
    int Choix_Welcome;

    printf("\n########################## - OneHand - ##########################\n");
    printf("#################### - Gestion des Taches - #####################\n");
    printf("\n Bienvenue dans l'application degestion de taches developpee excl\n");
    printf(" usivement pour l'association OneHand par la startup DigitalGear.\n");
    printf("\n Cette application console offre aux membres de l'association une\n");
    printf(" plateforme robuste pour creer, modifier, supprimer et visualiser\n leurs taches liees a leurs missions.\n");
    printf("\n Chaque tache est accompagnee d'informations cruciales telles que \n");
    printf(" la description detaillee, la date d'echeance, la priorite...\n");
    printf("\n####################### - DigitalGear - #########################\n");
    printf("\n\tPour continuer, Appuyez sur -> 1\n");
    printf("\tPour Quitter, Appuyez sur -> 0\n");
    printf("\tEntrez : ");
    scanf("%d", &Choix_Welcome);
    printf("\n####################### - DigitalGear - #########################\n");
    switch (Choix_Welcome)
    {
    case 1:
        Acceuil();
        break;
    case 0:
        printf("\n\tA bientot ! Vous avez quitte le programme.\n");
        printf("\n######################### - DigitalGear - #########################\n");
        break;
    default:
        printf("\n\tVeuillez entrer un choix valide !\n");
        Welcome();
        break;
    }
}

void Acceuil()
{
    int Choix_Acceuil;

    printf("\n########################## - OneHand - ##########################\n");
    printf("#################### - Gestion des Taches - #####################\n");
    printf("                                  \n");
    printf("\t1- Ajouter une tache.\n");
    printf("                                  \n");
    printf("\t2- Modifier une tache.\n");
    printf("                                  \n");
    printf("\t3- Supprimer une tache.\n");
    printf("                                  \n");
    printf("\t4- Afficher la liste des taches.\n");
    printf("                                  \n");
    printf("\t5- Ordonner les taches.\n");
    printf("                                  \n");
    printf("\t6- Filtrer les taches.\n");
    printf("                                  \n");
    printf("\t7- Rechercher une tache.\n");
    printf("                                  \n");
    printf("\t8- Enregistrer la base de donnee.\n");
    printf("                                  \n");
    printf("\t0- Quitter le programme!\n");
    printf("                                  \n");
    printf("    ENAA, DigitalGear, OneHand, Copyright tous droits reserves.");
    printf("\n####################### - DigitalGear - #########################\n");
    printf("\n\tVeuillez entrer votre selection : ");
    scanf("%d", &Choix_Acceuil);
    printf("\n####################### - DigitalGear - #########################\n");
    switch (Choix_Acceuil)
    {
    case 0:
        printf("\n \tA bientot ! Vous avez quitte le programme.\n");
        printf("\n####################### - DigitalGear - #########################\n");
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
        Filtrer();
        break;
    case 7:
        Rechercher();
        break;
    case 8:
        Enregistrer_Fichier();
        break;
    default:
        printf("\n\tVeuillez entrer un choix valide !\n");
        Acceuil();
        break;
    }
}

void Ajouter()
{
    for (int i = Taille; i < Taille + 1; i++)
    {
        printf("\n\tVeuillez entrer le nom de la tache : ");
        scanf(" %[^\n]s", Tableau_Taches[i].Nom_Tache);
        printf("\n\tVeuillez entrer la description de la tache : ");
        scanf(" %[^\n]s", Tableau_Taches[i].Description_Tache);
        printf("\n\tVeuillez entrer et l'heure la date d'echeance JJ/MM/AAAA - HH : ");
        scanf("%d/%d/%d - %d", &Tableau_Taches[i].date_Tache.jour,
              &Tableau_Taches[i].date_Tache.mois, &Tableau_Taches[i].date_Tache.annee,
              &Tableau_Taches[i].date_Tache.heure);
while ((Tableau_Taches[Taille].date_Tache.jour < 1 || Tableau_Taches[Taille].date_Tache.jour > 31) ||
       (Tableau_Taches[Taille].date_Tache.mois < 1 || Tableau_Taches[Taille].date_Tache.mois > 12) ||
       (Tableau_Taches[Taille].date_Tache.annee < 2024 || Tableau_Taches[Taille].date_Tache.annee > 2030) ||
       (Tableau_Taches[Taille].date_Tache.heure < 1 || Tableau_Taches[Taille].date_Tache.heure > 12))
{
    printf("\nVeuillez entrer une date et une heure valide sous forme (JJ / MM / AAAA - HH) : ");
    scanf("%d / %d / %d - %d", &Tableau_Taches[Taille].date_Tache.jour, &Tableau_Taches[Taille].date_Tache.mois, &Tableau_Taches[Taille].date_Tache.annee, &Tableau_Taches[Taille].date_Tache.heure);
}
       printf("\n\tVeuillez entrer la priorite de la tache (IMPORTANT, PEU IMPORTANT, PAS IMPORTANT) : ");
        scanf(" %[^\n]s", Tableau_Taches[i].Priorite_Tache);
        printf("\n\tVeuillez entrer le statut de la tache (COMPLETE, INCOMPLETE) : ");
        scanf(" %[^\n]s", Tableau_Taches[i].Status_Tache);
    }
    Taille++;
    printf("\n");
    printf("\n\tL'operation d'ajout est en cours d'execution...");
    printf("\n\tLa tache a ete ajoutee avec succes.\n");
    Acceuil();
}

void Supprimer()
{
    char Nom_Supprimer[100];
    printf("\n\tEntrer le nom de la tache a supprimer : ");
    scanf(" %[^\n]s", Nom_Supprimer);
    printf("\n");
    int res = Chercher(Nom_Supprimer);
    if (res == -1)
    {
        printf("\n\tLa tache a supprimer n'existe pas !\n");
    }
    else
    {
        for (int i = res; i < Taille; i++)
        {
            Tableau_Taches[i] = Tableau_Taches[i + 1];
        }
        Taille--;
        printf("\n");
        printf("\n\tL'operation de suppression est en cours d'execution...");
        printf("\n\tLa tache a ete supprimee avec succes.\n");
    }
    Acceuil();
}

void Modifier()
{
    char Nom_Modifier[100];
    printf("\n\tEntrer le nom de la tache a modifier : ");
    scanf(" %[^\n]s", Nom_Modifier);
    printf("\n");
    int res = Chercher(Nom_Modifier);
    if (res == -1)
    {
        printf("La tache a modifier n'existe pas !");
    }
    else
    {
        printf("\n\tVeuillez entrer les modifications a apporter a cette tache ->\n");
        printf("\n\t   -La nouvelle description de la tache : ");
        scanf("  %[^\n]s", Tableau_Taches[res].Description_Tache);
        printf("\n\t   -La nouvelle date et l'heure d'echeance JJ/MM/AAAA - HH : ");
        scanf("%d / %d / %d - %d", &Tableau_Taches[res].date_Tache.jour, &Tableau_Taches[res].date_Tache.mois, &Tableau_Taches[res].date_Tache.annee, &Tableau_Taches[res].date_Tache.heure);
while ((Tableau_Taches[Taille].date_Tache.jour < 1 || Tableau_Taches[Taille].date_Tache.jour > 31) ||
       (Tableau_Taches[Taille].date_Tache.mois < 1 || Tableau_Taches[Taille].date_Tache.mois > 12) ||
       (Tableau_Taches[Taille].date_Tache.annee < 2024 || Tableau_Taches[Taille].date_Tache.annee > 2030) ||
       (Tableau_Taches[Taille].date_Tache.heure < 1 || Tableau_Taches[Taille].date_Tache.heure > 12))
{
    printf("\nVeuillez entrer une date et une heure valide sous forme (JJ / MM / AAAA - HH) : ");
    scanf("%d / %d / %d - %d", &Tableau_Taches[Taille].date_Tache.jour, &Tableau_Taches[Taille].date_Tache.mois, &Tableau_Taches[Taille].date_Tache.annee, &Tableau_Taches[Taille].date_Tache.heure);
}
        printf("\n\t   -La nouvelle priorite de la tache (IMPORTANT, PEU IMPORTANT, PAS IMPORTANT) : ");
        scanf(" %[^\n]s", Tableau_Taches[res].Priorite_Tache);
        printf("\n\t   -Le nouveau statut de la tache (COMPLETE, INCOMPLET) : ");
        scanf(" %[^\n]s", Tableau_Taches[res].Status_Tache);
        printf("\n");
        printf("\n\tL'operation de modification est en cours d'execution...");
        printf("\n\tLa tache a ete modifiee avec succes.\n");
    }
    Acceuil();
}

void Ordonner()
{
    int Choix_Triage;
    printf("\n\tVeuillez entrer l'ordre de triage :\n");
    printf("\n\tPour trier par date croissante, Appuyez sur -> 1\n");
    printf("\tPour trier par date decroissante, Appuyez sur -> 2\n");
    printf("\tEntrez : ");
    scanf("%d", &Choix_Triage);
    switch (Choix_Triage)
    {
    case 1:
        BubbleSort_Croissant();
        break;
    case 2:
        BubbleSort_Decroissant();
        break;
    default:
        printf("\n\tVeuillez entrer un choix valide !\n");
        break;
    }
    Acceuil();
}

void Afficher()
{
    for (int i = 0; i < Taille; i++)
    {
        printf("\n\t->Nom de la tache %d : %s\n \t  -Description : %s\n \t  -Date d'echeance : %d/%d/%d - %dh\n \t  -Priorite : %s\n \t  -Statut : %s.\n", i + 1, Tableau_Taches[i].Nom_Tache, Tableau_Taches[i].Description_Tache, Tableau_Taches[i].date_Tache.jour, Tableau_Taches[i].date_Tache.mois, Tableau_Taches[i].date_Tache.annee, Tableau_Taches[i].date_Tache.heure, Tableau_Taches[i].Priorite_Tache, Tableau_Taches[i].Status_Tache);
    }
    Acceuil();
}
void BubbleSort_Croissant()
{
    struct Taches Remplace;
    for (int i = 0; i < Taille; i++)
    {
        for (int j = i + 1; j < Taille; j++)
        {
            if (Tableau_Taches[i].date_Tache.annee > Tableau_Taches[j].date_Tache.annee || (Tableau_Taches[i].date_Tache.annee == Tableau_Taches[j].date_Tache.annee && Tableau_Taches[i].date_Tache.mois > Tableau_Taches[j].date_Tache.mois) || (Tableau_Taches[i].date_Tache.annee == Tableau_Taches[j].date_Tache.annee && Tableau_Taches[i].date_Tache.mois == Tableau_Taches[j].date_Tache.mois && Tableau_Taches[i].date_Tache.jour > Tableau_Taches[j].date_Tache.jour) || (Tableau_Taches[i].date_Tache.annee == Tableau_Taches[j].date_Tache.annee && Tableau_Taches[i].date_Tache.mois == Tableau_Taches[j].date_Tache.mois && Tableau_Taches[i].date_Tache.jour == Tableau_Taches[j].date_Tache.jour && Tableau_Taches[i].date_Tache.heure > Tableau_Taches[j].date_Tache.heure))
            {
                Remplace = Tableau_Taches[i];
                Tableau_Taches[i] = Tableau_Taches[j];
                Tableau_Taches[j] = Remplace;
            }
        }
    }
    printf("\n");
    printf("\n\tL'operation de triage est en cours d'execution...");
    printf("\n\tLa liste des taches a ete triee avec succes.\n");
    Acceuil();
}

void BubbleSort_Decroissant()
{
    struct Taches Remplace;
    for (int i = 0; i < Taille; i++)
    {
        for (int j = i + 1; j < Taille; j++)
        {
            if (Tableau_Taches[i].date_Tache.annee < Tableau_Taches[j].date_Tache.annee || (Tableau_Taches[i].date_Tache.annee == Tableau_Taches[j].date_Tache.annee && Tableau_Taches[i].date_Tache.mois < Tableau_Taches[j].date_Tache.mois) || (Tableau_Taches[i].date_Tache.annee == Tableau_Taches[j].date_Tache.annee && Tableau_Taches[i].date_Tache.mois == Tableau_Taches[j].date_Tache.mois && Tableau_Taches[i].date_Tache.jour < Tableau_Taches[j].date_Tache.jour))
            {
                Remplace = Tableau_Taches[i];
                Tableau_Taches[i] = Tableau_Taches[j];
                Tableau_Taches[j] = Remplace;
            }
        }
    }
    printf("\n");
    printf("\n\tL'operation de triage est en cours d'execution...");
    printf("\n\tLa liste des taches a ete triee avec succes.\n");
    Acceuil();
}

void Filtrer()
{
    int Choix_Filtrage;
    printf("\n\tVeuillez entrer l'option de filtrage : \n");
    printf("\n\tPour filtrer par priorite, Appuyez sur -> 1\n");
    printf("\tPour filtrer par statut, Appuyez sur -> 2\n");
    printf("\tPour filtrer par date d'echeance, Appuyez sur -> 3\n");
    printf("\tEntrez : ");
    scanf("%d", &Choix_Filtrage);
    switch (Choix_Filtrage)
    {
    case 1:
        Filtrage_Priorite();
        break;
    case 2:
        Filtrage_Status();
        break;
    case 3 :
        Filtrage_DateEcheance();
        break;
    default:
        printf("\n\tVeuillez entrer un choix valide !\n");
        break;
    }
    Acceuil();
}

void Filtrage_Priorite()
{
    int j = 0;
    char Choix_Filtrage[100];
    struct Taches Filtrage[200];
    printf("\n\tEntrez le choix de filtrage (IMPORTANT, PEU IMPORTANT, PAS IMPORTANT) : ");
    scanf(" %[^\n]", Choix_Filtrage);
    for (int i = 0; i < Taille; i++)
    {
        int resultCompare = strcmp(Tableau_Taches[i].Priorite_Tache, Choix_Filtrage);
        if (resultCompare == 0)
        {
            Filtrage[j] = Tableau_Taches[i];
            j++;
        }
    }
    printf("\n");
    printf("\n\tL'operation de filtrage est en cours d'execution...");
    printf("\n\tLa liste des taches a ete filtree avec succes.\n");
    for (int i = 0; i < j; i++)
    {
        printf("\n\t->Nom de la tache %d : %s\n \t  -Description : %s\n \t  -Date d'echeance : %d/%d/%d - %dh\n \t  -Priorite : %s\n \t  -Statut : %s.\n", i + 1, Filtrage[i].Nom_Tache, Filtrage[i].Description_Tache, Filtrage[i].date_Tache.jour, Filtrage[i].date_Tache.mois, Filtrage[i].date_Tache.annee, Filtrage[i].date_Tache.heure, Filtrage[i].Priorite_Tache, Filtrage[i].Status_Tache);
    }
    Acceuil();
}

void Filtrage_Status()
{
    int j = 0;
    char Choix_Filtrage[100];
    struct Taches Filtrage[200];
    printf("\n\tEntrez le choix de filtrage (COMPLETE, INCOMPLET) : ");
    scanf(" %[^\n]", Choix_Filtrage);
    for (int i = 0; i < Taille; i++)
    {
        int resultCompare = strcmp(Tableau_Taches[i].Status_Tache, Choix_Filtrage);
        if (resultCompare == 0)
        {
            Filtrage[j] = Tableau_Taches[i];
            j++;
        }
    }
    printf("\n");
    printf("\n\tL'operation de filtrage est en cours d'execution...");
    printf("\n\tLa liste des taches a ete filtree avec succes.\n");
    for (int i = 0; i < j; i++)
    {
        printf("\n\t->Nom de la tache %d : %s\n \t  -Description : %s\n \t  -Date d'echeance : %d/%d/%d - %dh\n \t  -Priorite : %s\n \t  -Statut : %s.\n", i + 1, Filtrage[i].Nom_Tache, Filtrage[i].Description_Tache, Filtrage[i].date_Tache.jour, Filtrage[i].date_Tache.mois, Filtrage[i].date_Tache.annee, Filtrage[i].date_Tache.heure, Filtrage[i].Priorite_Tache, Filtrage[i].Status_Tache);
    }
    Acceuil();
}

void Filtrage_DateEcheance()
{
    int i, j;
    int Choix_Filtrage_Mois, Choix_Filtrage_Annee;
    struct Taches Filtrage[200];
    printf("\nVeuillez entrer l'annee de filtrage des taches :");
    scanf("%d", &Choix_Filtrage_Annee);
    printf("\nVeuillez entrer le mois de filtrage des taches :");
    scanf("%d", &Choix_Filtrage_Mois);
    for (i = 0; i < Taille; i++)
    {
        if (Tableau_Taches[i].date_Tache.annee == Choix_Filtrage_Annee && Tableau_Taches[i].date_Tache.mois == Choix_Filtrage_Mois)
        {
            Filtrage[j] = Tableau_Taches[i];
            j++;
        }
    }
    printf("\n");
    printf("\n\tL'operation de filtrage est en cours d'execution...");
    printf("\n\tLa liste des taches a ete filtree avec succes.\n");
    for (i = 0; i < j; i++)
    {
        printf("\n\t->Nom de la tache %d : %s\n \t  -Description : %s\n \t  -Date d'echeance : %d/%d/%d - %dh\n \t  -Priorite : %s\n \t  -Statut : %s.\n", i + 1, Filtrage[i].Nom_Tache, Filtrage[i].Description_Tache, Filtrage[i].date_Tache.jour, Filtrage[i].date_Tache.mois, Filtrage[i].date_Tache.annee, Filtrage[i].date_Tache.heure, Filtrage[i].Priorite_Tache, Filtrage[i].Status_Tache);
    }
    Acceuil();
}

void Rechercher()
{
    char Nom_Rechercher[100];
    printf("\n\tEntrer le nom de la tache a rechercher : ");
    scanf(" %[^\n]", Nom_Rechercher);
    int res = Chercher(Nom_Rechercher);
    if (res == -1)
    {
        printf("\n\tLa tache a rechercher n'existe pas !");
    }
    else
    {
        printf("\n\t->Nom de la tache %d : %s\n \t  -Description : %s\n \t  -Date d'echeance : %d/%d/%d - %dh\n \t  -Priorite : %s\n \t  -Statut : %s.\n", res + 1, Tableau_Taches[res].Nom_Tache, Tableau_Taches[res].Description_Tache, Tableau_Taches[res].date_Tache.jour, Tableau_Taches[res].date_Tache.mois, Tableau_Taches[res].date_Tache.annee, Tableau_Taches[res].date_Tache.heure, Tableau_Taches[res].Priorite_Tache, Tableau_Taches[res].Status_Tache);
    }
    Acceuil();
}

void Enregistrer_Fichier()
{
    FILE *fichier = NULL;
    fichier = fopen("DataBase.txt", "w");
    if (fichier == NULL)
    {
        printf("Le fichier n'existe pas !");
    }
    else
    {
        for (int i = 0; i < Taille; i++)
        {
            fprintf(fichier, "\n\t->Nom de la tache %d : %s\n \t  -Description : %s\n \t  -Date d'echeance : %d/%d/%d - %dh\n \t  -Priorite : %s\n \t  -Statut : %s.\n", i + 1, Tableau_Taches[i].Nom_Tache, Tableau_Taches[i].Description_Tache, Tableau_Taches[i].date_Tache.jour, Tableau_Taches[i].date_Tache.mois, Tableau_Taches[i].date_Tache.annee, Tableau_Taches[i].date_Tache.heure, Tableau_Taches[i].Priorite_Tache, Tableau_Taches[i].Status_Tache);
        }
    }
    printf("La base de donnee a ete enregistrer avec succes !");
}

void main()
{
    Welcome();
}
