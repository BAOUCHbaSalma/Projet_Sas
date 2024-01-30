#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int Jour;
    int Mois;

} Datedecheance;
typedef struct
{
    int heurs;
} HeursTaches;

typedef struct
{
    char Nom[20];
    char Description[50];
    char Priorite[20];
    char Statut[20];
    Datedecheance Date;
    HeursTaches Heurs;

} Taches;

void MENU()
{
    int choice;
    do
    {
        printf("\n\t\t----------Menu Principale----------\n\n");
        printf("  1-Ajouter une Tache : \n");
        printf("  2-Afficher la Liste des Taches :  \n");
        printf("  3-Modifier une Tache :  \n");
        printf("  4-Supprimer une Tache :  \n");
        printf("  5-Ordonner les Taches:  \n");
        printf("  6-Filtrer les Taches : \n");
        printf("\n\n");
        printf("Votre choix : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            Ajouter();
            break;
        case 2:
            Afficher();
            break;
        case 3:
            Modifier();
            break;
        case 4:
            Supprimer();
            break;
        case 5:
            Ordonner();
            break;
        case 6:
            Filtrer();
            break;
        default:
            printf("Choix invalide. Veuillez entrer un nombre entre 1 et 6.\n");
        }
    } while (choice != 1);
}

int Taille = 0;
Taches T[100];

void Ajouter()
{
    if (Taille < 100)
    {
        getchar();

        printf("ENTREZ LE NOM DE VOTRE TACHE : ");
        gets(T[Taille].Nom);

        printf("ENTREZ LA DESCRIPTION DE VOTRE TACHE :");
        gets(T[Taille].Description);

        printf("ENTREZ LA PRIORITE DE VOTRE TACHE :");
        gets(T[Taille].Priorite);

        printf("ENTREZ LE STATUT DE VOTRE TACHE :");
        gets(T[Taille].Statut);

        printf("ENTREZ LE JOUR DE VOTRE TACHE : ");
        scanf("%d", &T[Taille].Date.Jour);

        printf("ENTREZ LE MOIS DE VOTRE TACHE : ");
        scanf("%d", &T[Taille].Date.Mois);

        printf("ENTREZ L'HEURS DE VOTRE TACHE : ");
        scanf("%d", &T[Taille].Heurs.heurs);

        Taille++;
        printf("Tache Ajouter Avec Succes!\n");
    }
    else
    {
        printf("La liste des taches est pleine impossible d'ajouter plus de taches.\n");
    }

    MENU();
}

void Afficher()
{
    if (Taille > 0)
    {

        printf("\n\t\t*********LA LISTE DES TACHES*********\n\n");
        for (int i = 0; i < Taille; i++)
        {
            printf("*Tache %d* : \n", i + 1);
            printf("Nom : %s \n", T[i].Nom);
            printf("Description : %s \n", T[i].Description);
            printf("Priorite : %s \n", T[i].Priorite);
            printf("Statut : %s \n", T[i].Statut);
            printf("Date : %d/%d \n", T[i].Date.Jour, T[i].Date.Mois);
            printf("Heurs: %d \n", T[i].Heurs.heurs);

            printf("\n");
        }
    }
    else
    {
        printf("Aucune tache a Afficher.\n");
    }
}

void Modifier()
{
    if (Taille > 0)
    {
        int NBR;
        printf("Entrez le numero de la tache pour la  modifier : ");
        scanf("%d", &NBR);
        if (NBR >= 1 && NBR <= Taille)
        {
            getchar();
            printf("ENTREZ LE NOUVEAU NOM DE VOTRE TACHE : ");

            gets(T[NBR - 1].Nom);

            printf("ENTREZ LA NOUVELLE DESCRIPTION DE VOTRE TACHE : ");

            gets(T[NBR - 1].Description);

            printf("ENTREZ LA NOUVELLE PRIORITE DE VOTRE TACHE : ");

            gets(T[NBR - 1].Priorite);

            printf("ENTREZ LE NOUVEAU STATUT DE VOTRE TACHE : ");

            gets(T[NBR - 1].Statut);

            printf("ENTREZ LE NOUVEAU JOUR DE VOTRE TACHE : ");
            scanf("%d", &T[NBR - 1].Date.Jour);

            printf("ENTREZ LE NOUVEAU MOIS DE VOTRE TACHE : ");
            scanf("%d", &T[NBR - 1].Date.Mois);

            printf("ENTREZ LA NOUVELLE HEURS DE VOTRE TACHE : ");
            scanf("%d", &T[NBR - 1].Heurs.heurs);
            printf("Tache modifiee avec succes!\n");
        }
        else
        {
            printf("Aucune tache avec ce numero.\n");
        }
    }
    else
    {
        printf("La liste des taches est vide ,Aucun tache a modifier\n");
    }

    MENU();
}

void Supprimer()
{
    if (Taille > 0)
    {
        int NBR;
        int i;
        printf("Entrer le numero de la tache pour supprimer : ");
        scanf("%d", &NBR);
        if (NBR = 1 && NBR <= Taille)
        {
            for (i = NBR - 1; i < Taille - 1; i++)
            {
                T[i] = T[i + 1];
            }
            Taille--;
            printf("Tache supprimee avec succes!\n");
        }
        else
        {
            printf("Aucune tache avec ce numero.\n");
        }
    }
    else
    {
        printf("La liste des Taches Vide . Ancune Tache a supprimer");
    }

    MENU();
}
void Ordonner()
{
    int Tr;
    printf("Pour trier avec ordre croissant tappez 1, ordre decroissant tappez 2 \n");
    scanf("%d", &Tr);
    switch (Tr)
    {
    case 1:
        TriCroissant();

        break;
    case 2:
        TriDecrooissant();
        break;
    default:
        printf("Ressayer une autre fois");
    }
}


int main(){
    MENU();

    return 0;
}