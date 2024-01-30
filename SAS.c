#include <stdio.h>
#include <string.h>

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

int main(){

    return 0;
}