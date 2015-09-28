#include<stdio.h>
#include<conio.h>

void almacenar();
int bi[10][10],j,i,n,suma=0;

main(){
	printf("dame el tamano de la matriz: ");
	scanf("%d",&n);
	while(n<0&&n>10){
		printf("ERROR de captura");
		printf("dame el tamano de la matriz: ");
		scanf("%d",&n);
	}
	almacenar();
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				suma+=bi[i][j];
			}
		}
	}
	printf("La suma de la diagonal principal es %d",suma);
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
