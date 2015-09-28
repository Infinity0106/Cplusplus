//Bernardo Orozco Garza
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

main(){
	int i=0,n=0;
	float precio[50],sum;
	char nom[50][20];//string arreglos

	printf("Bernardo Orozco Garza 1719152");
	printf("\nCuantos productos son? ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("\nDame el nombre del producto #%d: ",i+1);
		scanf("%s",&nom[i]);
		printf("Dame el preicio del producto #%d $",i+1);
		scanf("%f",&precio[i]);
		sum+=precio[i];
	}
	printf("Los precios son:\n");
	for(i=0;i<n;i++){
		printf("Nombre: %s",nom[i]);
		printf("\tPrecio #%d $%.2f\n",i+1,precio[i]);
	}
	printf("----------------------");
	printf("\nEl total es $%.2f",sum);

	getch();
}
