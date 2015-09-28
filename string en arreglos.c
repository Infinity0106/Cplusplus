#include<stdio.h>
#include<conio.h>
#include<windows.h>

void almacena();
void imprime();
int i,n;
char nom[30][15];

main(){
	printf("Bernardo Orozco Garza 1719152\n");
	almacena();
	imprime();
	printf("\n");
	
	getch();
}

void almacena(){
	printf("\nCuantos nombres? ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nNombre: ");
		scanf("%s",&nom[i]);
	}
	return;
}

void imprime(){
	system("cls");
	for(i=0;i<n;i++){
		printf("\nEl nombre #%d es %s",i+1,nom[i]);
	}
	return;
}
