#include<stdio.h>
#include<conio.h>

void almacenar();
void comparar();
int bi[10][10],n;
int i,j;
main(){

	printf("dame el tamano de la matriz: ");
	scanf("%d",&n);
	while(n<0&&n>10){
		printf("ERROR de captura");
		printf("dame el tamano de la matriz: ");
		scanf("%d",&n);
	}
	almacenar();
	comparar();

	getch();
}

void almacenar(){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("dame el numero de la casilla %d,%d: ",i+1,j+1);
			scanf("%d",&bi[i][j]);
		}
	}
	return;
}

void comparar(){
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(bi[i][j]%2==0){
				printf("\nEl numero %d de la casilla %d,%d es par\n",bi[i][j],i+1,j+1);
			}
		}
	}
	return;
}
