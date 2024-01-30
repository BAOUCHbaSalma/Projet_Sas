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

int main(){

    return 0;
}