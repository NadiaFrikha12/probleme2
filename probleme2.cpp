#include<stdio.h>
#include<ctype.h>
#include<time.h>
#include<string.h>

struct joueur{
	char nom[10];
	char prenom[10];
	int age;
};
typedef struct joueur joueur ;

int main(){
	joueur j;
	int manches;int d1,d,e=0,p=0,g=0;
	
	printf("donner le nom : ");
	scanf("%s",j.nom);
	printf("donner le prenom : ");
	scanf("%s",j.prenom);
	printf("donner l'age : ");
	scanf("%d",j.age);
	
	printf("donner le nombre de manches");
	scanf("%d",&manches);
	
	for (int i=0;i<manches;i++){
		do {
		printf("tapez 1 pour obtenir pierre");
		printf("\ntapez 2 pour obtenir papier");
		printf("\ntapez 3 pour obtenir ciseau");
		scanf("%d",&d);
		}while(!(d<3 && 1<d));
	
		d1=(rand()%)(3-1+1))+1;
	
		if(d1==d){printf("égalité");e++;}
		if(d1=1 && d=2){printf("gagné");g++}
		if(d1=1 && d=3){printf("pérdu");p++}
		if(d1=2 && d=3){printf("gagné");g++}
		if(d1=2 && d=1){printf("pérdu");p++}
		if(d1=3 && d=1){printf("gagné");g++}
		if(d1=3 && d=2){printf("pérdu");p++}
	
	}
	if(p<g){printf("%s, tu as gagné",j.nom);}
	if(p>g){printf("%s, tu as perdu",j.nom);}
	if(p==g){printf("égalité");}
	printf("gain: %d , perte %d , égalité %d",g,p,e);
	
	return 0;
	}
	
	
	
	
	
	
