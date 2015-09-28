#include<stdio.h>
#include<conio.h>

void guardar();
void promedio();
void imprime();
void imprimecuadro();
int i,j,f,c,mat[10][10];
float suma,prom;

main(){
	guardar();
	promedio();
	imprime();
	imprimecuadro();
	getch();
}

void guardar(){
	do{
		printf("Numero de filas: ");
		scanf("%d",&f);
		printf("Numero de columnas: ");
		scanf("%d",&c);
		while(f!=c){
			printf("Tienes que ser iguales\n");
			printf("Numero de filas: ");
			scanf("%d",&f);
			printf("Numero de columnas: ");
			scanf("%d",&c);
		}
	}while(f!=c);
	
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			printf("Dame el numero de la casilla %d,%d: ",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	}
	return;
}

void promedio(){
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			suma+=mat[i][j];
		}
	}
	prom=suma/(i*j);
	return;
}

void imprimecuadro(){
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			printf("%d\t",mat[i][j]);	
		}
		printf("\n");
	}
	return;
}

void imprime(){
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			printf("%d,%d = %d\n",i+1,j+1,mat[i][j]);	
		}
	}
	printf("La suma es %.0f\n",suma);
	printf("El promedio es %.2f",prom);
	
	return;
}
