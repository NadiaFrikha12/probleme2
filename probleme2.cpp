//jeu pierre-papier-ciseaux
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

struct joueur{
	char nom[10];
	char prenom[10];
	int age;
};
typedef struct joueur joueur;

int main(){
	
	joueur j; 
	int manches; //nombre de manches
	int d1; //choix de l'utilisateur entre (pierre, papier, ciseaux)
	int d; //choix de l'ordinateur entre (pierre, papier, ciseaux)
	int e=0; //nombre d'egalite
	int p=0; //nombre de perte
	int g=0; //nombre de gain 
	
	//enregistrer le joueur
	printf("donner le nom : ");
	scanf("%s",j.nom);
	printf("donner le prenom : ");
	scanf("%s",j.prenom);
	printf("donner l'age : ");
	scanf("%d",&j.age);
	
	//saisir le nombre de manches
	printf("donner le nombre de manches");
	scanf("%d",&manches);
	
	for (int i=0;i<manches;i++){
		//permettre au joueur de choisir entre pierre, papier et ciseaux
		do {
		printf("\ntapez 0 pour obtenir pierre");
		printf("\ntapez 1 pour obtenir papier");
		printf("\ntapez 2 pour obtenir ciseaux");
		printf("\nchoix:");
		scanf("%d",&d);
		}while((d>2 || d<0));
		
		//affichage du choix du joueur
		switch(d){
			case 0 : printf("\ntu as choisi pierre");break;
			case 1 : printf("\ntu as choisi papier");break;
			case 2 : printf("\ntu as choisi ciseaux");break;
		}
		
		//gérer aléatoirement le choix de l'ordinateur entre pierre, papier et ciseaux
		srand(time(NULL));
		d1=(rand()%3);
		
		//affichage du choix de l'ordinateur 
		switch(d1){
			case 0 : printf("\nl'ordinateur a choisi pierre\n");break;
			case 1 : printf("\nl'ordinateur a choisi papier\n");break;
			case 2 : printf("\nl'ordinateur a choisi ciseau\n");break;
		}
		
		//determination du gagnant 
		if(d1==d){printf("\negalite\n");e++;}
		if(d1==0 && d==1){printf("\ntu gagnes\n");g++;}
		if(d1==0 && d==2){printf("\ntu perds\n");p++;}
		if(d1==1 && d==2){printf("\ntu gagnes\n");g++;}
		if(d1==1 && d==0){printf("\ntu perds\n");p++;}
		if(d1==2 && d==0){printf("\ntu gagnes\n");g++;}
		if(d1==2 && d==1){printf("\ntu perds\n");p++;}
	}
	
	//affichage des resultats
	if(p<g){printf("\n%s, tu as gagne",j.prenom);}
	if(p>g){printf("\n%s, tu as perdu",j.prenom);}
	if(p==g){printf("\nresultat: egalite");}
	//affichage des statistiques du jeux 
	printf("\ngain: %d , perte: %d , egalite: %d",g,p,e);
	
	return 0;
}
	
	
	
	
	
