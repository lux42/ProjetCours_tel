#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Structure.h"

void main() {
    LIRE_DATA();
	//init();
	system("color a");

	/////////////////////////////////////////////
	int choix=0;
	printf("********************************************************\n");
	printf("*        Structure: Caracteristiques de natel          *\n");
	do {
		//***** PROGRAMME PRINCIPAL *****//
		printf("********************************************************\n");
		printf("* Veuillez saisir un mode:                             *\n");
		printf("*                                                      *\n");
		printf("* Afficher les telephones:      1                      *\n");
		printf("* Ajouter un nouveau telephone: 2                      *\n");
		printf("* Modifier un telephone         3                      *\n");
		printf("* Supprimer un telephone        4                      *\n");
		printf("* Comparer les telephones       5                      *\n");
		printf("* Quitter:                      0                      *\n");
		printf("********************************************************\n");
		printf("* Choix :");
		scanf("%d",&choix);
		system("cls");
		fflush(stdin);
		/////////////////////////////////////////////////////////
		// affichage des la structures
		/////////////////////////////////////////////////////////
		if(choix == 1) {
			int aff_case,aff_struct;
			system("cls");
			// Récupérer toute la liste de telephone
			printf("Quel telephone voulez-vous afficher :\n");
			int j=0,h=0;
			for (j=0;j<=SIZE_TAB;j++) {
				if(strlen(t[j].marque) != 0) {
					h++;
					printf(" %3d: %s %s\n", j, t[j].marque, t[j].modele);
				}
			}
			scanf("%d",&aff_struct);
			printf("\nVoulez vous afficher:\nla marque 1\nle modele 2\nla carte_SD 3\nla memoire_rom 4\nla memoire_ram 5\nla dimention 6\nle prix 7\nTout 0\n");
			scanf("%d",&aff_case);
			system("cls");
			aff(aff_struct,aff_case);
		}
		/////////////////////////////////////////////////////////
		// Création de la structure
		/////////////////////////////////////////////////////////
		if(choix == 2) {
			int i=0,j=0,h=0;
			printf("********************************************************\n");
			printf("* Telephone(s) deja enregistres:                       *\n");
			printf("********************************************************\n");
			while (i<SIZE_TAB && strlen(t[i].marque) != 0) {
				i++;
			}
			for (j=0;j<SIZE_TAB;j++) {
				if(strlen(t[j].marque) != 0) {
					h++;
					printf(" %3d: %s %s\n", j, t[j].marque, t[j].modele);
				}
			}
			printf("********************************************************\n");
			new_tel(i);
		}
		/////////////////////////////////////////////////////////
		// Modification un telephone
		/////////////////////////////////////////////////////////
		if(choix == 3) {
			printf("********************************************************\n");
			printf("* Telephone(s) enregistres:                            *\n");
			printf("********************************************************\n");
			printf("* Quelle telephone voulez-vous modifier :              *\n");
			int i=0,modif_tel=0;
			while (i<SIZE_TAB && strlen(t[i].marque) != 0) {
				printf("* %3d: %s %s\n", i, t[i].marque, t[i].modele);
				i++;
			}
			scanf("%d",&modif_tel);
			// verif modif_struct
			modif(modif_tel);
		}
		/////////////////////////////////////////////////////////
		// Suppression du telephone
		/////////////////////////////////////////////////////////
		if(choix == 4) {
			printf("********************************************************\n");
			printf("* Telephone(s) enregistres:                            *\n");
			printf("********************************************************\n");
			printf("* Quelle telephone voulez-vous supprimer :             *\n");
			int i=0,del=0;
			while (i<SIZE_TAB && strlen(t[i].marque) != 0) {
				printf("* %3d: %s %s\n", i, t[i].marque, t[i].modele);
				i++;
			}
			scanf("%d",&del);
			del_tel(del);
		}
		/////////////////////////////////////////////////////////
		// Comparaison des telephones
		/////////////////////////////////////////////////////////
		if(choix == 5) {
			printf("********************************************************\n");
			printf("* Telephone(s) enregistres:                            *\n");
			printf("********************************************************\n");
			int i=0;
			while (i<SIZE_TAB && strlen(t[i].marque) != 0) {
				// printf("* %3d: %s %s\n", i, t[i].marque, t[i].modele);
				i++;
			}
			comp_tel(i);
		}
		/////////////////////////////////////////////////////////
		// ERREUR SAISIE
		/////////////////////////////////////////////////////////
		if(choix > 5) {
			printf("\nChoix non valide\n");
		}
	}
	while(choix != 0);


	ECRIRE_DATA();
}
