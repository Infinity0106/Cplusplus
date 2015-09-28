#include<stdio.h>
#include<conio.h>
#include<windows.h>

void almacena();
void imprime();
void busqueda();
int i,n;
char nom[30][25];

main(){
	printf("Bernardo Orozco Garza 1719152\n");
	almacena();
	imprime();
	busqueda();
	printf("\n");
	
	getch();
}

void almacena(){
	puts("\nCuantos nombres? ");
	scanf("%d",&n);
	while(n<=0||n>30){
		puts("ERROR de Captura");
		puts("\nCuantos nombres? ");
		fflush(stdin);
		scanf("%d",&n);
	}
	for(i=0;i<n;i++){
		puts("\nNombre: ");
		fflush(stdin);
		gets(nom[i]);
	}
	return;
}

void imprime(){
	for(i=0;i<n;i++){
		printf("\nEl nombre #%d es %s",i+1,nom[i]);
	}
	return;
}

void busqueda(){
	char com[25];
	system("cls");
	puts("\nDame un nombre para buscar: ");
	fflush(stdin);
	gets(com);
	for(i=0;i<n;i++){
		if(strcmp(nom[i],com)==0){
			puts("El nombre si esta en el arreglo");
		}
		else{
			puts("El nombre no esta en el arreglo");
		}
	}
	return;
}
