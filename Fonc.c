#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Fonc.h"

#include "Structure.h"



void init()
{
    // Init first tel
    strcpy(t[0].marque, "OnePlus");
    strcpy(t[0].modele, "One");
    strcpy(t[0].carte_sd,"interne");
    t[0].mem = 16;
    t[0].mem_ram = 3;
    t[0].dim = 5.5;
    t[0].prix = 249.00;


    strcpy(t[1].marque, "iPhone");
    strcpy(t[1].modele, "6");
    strcpy(t[1].carte_sd,"interne");
    t[1].mem        = 16;
    t[1].mem_ram    = 1;
    t[1].dim        = 4.7;
    t[1].prix       = 639.00;


    strcpy(t[2].marque, "Samsung");
    strcpy(t[2].modele, "S6");
    strcpy(t[2].carte_sd,"interne");
    t[2].mem        = 32;
    t[2].mem_ram    = 3;
    t[2].dim        = 5.1;
    t[2].prix       = 456.00;


    strcpy(t[3].marque, "Sony");
    strcpy(t[3].modele, "Z5");
    strcpy(t[3].carte_sd,"externe");
    t[3].mem        = 32;
    t[3].mem_ram    = 3;
    t[3].dim        = 5.2;
    t[3].prix       = 559.00;


    strcpy(t[4].marque, "LG");
    strcpy(t[4].modele, "G4");
    strcpy(t[4].carte_sd,"externe");
    t[4].mem        = 32;
    t[4].mem_ram    = 3;
    t[4].dim        = 5.5;
    t[4].prix       = 549.90;

}


void new_tel(int x)
{
    printf("Saisir la marque:\n");
    gets(t[x].marque);

    printf("Saisir le modele:\n");
    gets(t[x].modele);

    printf("Saisir la carte_SD (interne ou externe):\n");
    gets(t[x].carte_sd);

    printf("Saisir la memoire_rom:\n");
    scanf("%d",&t[x].mem);

    printf("Saisir la memoire_ram:\n");
    scanf("%d",&t[x].mem_ram);

    printf("Saisir la taille de l'ecran:\n");
    scanf("%f",&t[x].dim);

    printf("Saisir le prix:\n");
    scanf("%lf",&t[x].prix);
    system("cls");

}


void aff(int x,int champ)
{
        switch(champ)
        {
            case 0:
            printf("Marque:             %s\n",t[x].marque);
            printf("Modele:             %s\n",t[x].modele);
            printf("Carte_SD:           %s\n",t[x].carte_sd);
            printf("Taille memoire:     %d\n",t[x].mem);
            printf("Taille memoire ram: %d\n",t[x].mem_ram);
            printf("Taille de l'ecran:  %.1f\n",t[x].dim);
            printf("Prix:               %.2f\n",t[x].prix);
            break;
            case 1:
            printf("Marque:             %s\n",t[x].marque);
            break;
            case 2:
            printf("Modele:             %s\n",t[x].modele);
            break;
            case 3:
            printf("Carte_SD:           %s\n",t[x].carte_sd);
            break;
            case 4:
            printf("Taille memoire:     %d\n",t[x].mem);
            break;
            case 5:
            printf("Taille memoire ram: %d\n",t[x].mem_ram);
            break;
            case 6:
            printf("Taille de l'ecran:  %.1f\n",t[x].dim);
            break;
            case 7:
            printf("Prix:               %.2f\n",t[x].prix);
            break;
            default:
            printf("ERREUR\n\n");
            break;
        }
}


void modif(int x)
{

            printf("Marque:             %s\n",t[x].marque);
            printf("Modele:             %s\n",t[x].modele);
            printf("Carte_SD:           %s\n",t[x].carte_sd);
            printf("Taille memoire:     %d\n",t[x].mem);
            printf("Taille memoire ram: %d\n",t[x].mem_ram);
            printf("Taille de l'ecran:  %.1f\n",t[x].dim);
            printf("Prix:               %.2f\n",t[x].prix);

int champ=0;
    printf("* Voulez vous modifier:\n");
    printf("    la marque           1\n");
    printf("    le modele           2\n");
    printf("    la carte_SD         3\n");
    printf("    la memoire_rom      4\n");
    printf("    la memoire_ram      5\n");
    printf("    la taille de lecran 6\n");
    printf("    le prix             7\n");
scanf("%d",&champ);

fflush(stdin);
switch(champ)
    {
    case 1:
        printf("Modifier la marque:\n");
        gets(t[x].marque);
        system("cls");
    break;
    case 2:
        printf("Modifier le modele:\n");
        gets(t[x].modele);
        system("cls");
    break;
    case 3:
        printf("Modifier la carte_SD (interne ou externe):\n");
        gets(t[x].carte_sd);
        system("cls");
    break;
    case 4:
        printf("Modifier la memoire_rom:\n");
        scanf("%d",&t[x].mem);
        system("cls");
    break;
    case 5:
        printf("Modifier la memoire_ram:\n");
        scanf("%d",&t[x].mem_ram);
        system("cls");
    break;
    case 6:
        printf("Modifier la taille de l'ecran:\n");
        scanf("%f",&t[x].dim);
        system("cls");
    break;
    case 7:
        printf("Modifier le prix:\n");
        scanf("%lf",&t[x].prix);
        system("cls");
    break;
    default:
        printf("\nSelection non valide \n");
    break;
    }
}


void del_tel(int x)
{
    int choix = 0;
    printf("Voulez-vous vraiment effacer le telephone(0 non / 1 oui)\n");

            printf("Marque:             %s\n",t[x].marque);
            printf("Modele:             %s\n",t[x].modele);
            printf("Carte_SD:           %s\n",t[x].carte_sd);
            printf("Taille memoire:     %d\n",t[x].mem);
            printf("Taille memoire ram: %d\n",t[x].mem_ram);
            printf("Taille de l'ecran:  %.1f\n",t[x].dim);
            printf("Prix:               %.2f\n",t[x].prix);
scanf("%d",&choix);

if(choix != 0)
{
    t[x] = t_supp;
}
}



void comp_tel(int x)
{
        printf("Marque\t Modele\t Carte_SD\t ROM\t RAM\t Ecran\t Prix\n");
            for(int i=0;i<x;i++)
            {
            printf("%s\t %s\t %s\t %d\t %d\t %.1f\t %.2f \n",t[i].marque,t[i].modele,t[i].carte_sd,t[i].mem,t[i].mem_ram,t[i].dim,t[i].prix);
            }
            printf("\n");
}



void LIRE_DATA()
{
    FILE* fichier = NULL;
    fichier = fopen("TAB.txt", "r");
	for (int i=0;i<SIZE_TAB;i++){

		fscanf(fichier, "%s\n%s\n%s\n%d\n%d\n%f\n%lf\n\n", &t[i].marque ,&t[i].modele ,&t[i].carte_sd ,&t[i].mem ,&t[i].mem_ram ,&t[i].dim ,&t[i].prix);

	if(t[i].marque == "X"){
	 strcpy(t[i].marque,"test");
	}
    }
	fclose(fichier);
}


void ECRIRE_DATA(int x)
{
    FILE* fichier = NULL;

	fichier = fopen("TAB.txt", "w+");

    int test=0;
    while (test<SIZE_TAB && strlen(t[test].marque) != 0) {
    test++;
    }


	for (int i=0;i<SIZE_TAB;i++) {
            if(i>=test)
            {
            strcpy(t[i].marque,"X");
            strcpy(t[i].modele,"X");
            strcpy(t[i].carte_sd,"X");
            }

    fprintf(fichier, "%s\n%s\n%s\n%d\n%d\n%.1f\n%.2f\n\n", t[i].marque,t[i].modele,t[i].carte_sd,t[i].mem,t[i].mem_ram,t[i].dim,t[i].prix);
	}
	fclose(fichier);
}



